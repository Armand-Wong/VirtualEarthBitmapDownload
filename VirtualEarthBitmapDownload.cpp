/**********************************************************************
 * 
 * VirtualEarthBitmapDownload.cpp
 *
 *
 * History:
 *  2009-04-25   v0    - First private version
 *  2009-04-27   v1    - First public release on http://code.msdn.microsoft.com/VirtualEarthCPP
 *  2009-04-27   v2    - Small modifications
 *  2009-06-06   v3    - Small bugfix (now closing the downloaded file correctly)
 *
 **********************************************************************/

#include "stdafx.h"



// The IP-Adress must only be set, if YOU want to differentate between different clients...
#define IP_ADDRESS "127.0.0.1"


// Get your own Virtual-Earth-Test-Account:
//
// Virtual-Earth Customer Service:
// https://mappoint-css.live.com/CSCV3/
//
#define VIRTUAL_EARTH_ACCOUNT_ID "123456"
#define VIRTUAL_EARTH_PASSWORD "PassW.RD"



// For WinInet-functions
#include <windows.h>
#include "Wininet.h"
#pragma comment(lib, "Wininet.lib")

// SOAP-basics:
#include "soapH.h"
// Generated namespace table (just include any one of the nsmap-file)
#include "BasicHttpBinding_USCOREIGeocodeService.nsmap"

// Generated proxy-classes
#include "soapCommonServiceSoapProxy.h"
#include "soapBasicHttpBinding_USCOREIGeocodeServiceProxy.h"
#include "soapBasicHttpBinding_USCOREIImageryServiceProxy.h"
#include "soapBasicHttpBinding_USCOREIRouteServiceProxy.h"
#include "soapBasicHttpBinding_USCOREISearchServiceProxy.h"


// OpenSSL-Support for authentication:
#include "plugin/httpda.h"
#ifdef _DEBUG
  #ifdef _DLL
    #pragma comment(lib, "libeay32MDd.lib")
    #pragma comment(lib, "ssleay32MDd.lib")
  #else
    #pragma comment(lib, "libeay32MTd.lib")
    #pragma comment(lib, "ssleay32MTd.lib")
  #endif
#else
  #ifdef _DLL
    #pragma comment(lib, "libeay32MD.lib")
    #pragma comment(lib, "ssleay32MD.lib")
  #else
    #pragma comment(lib, "libeay32MT.lib")
    #pragma comment(lib, "ssleay32MT.lib")
  #endif
#endif

// Helfer function to convert std::string to std::wstring
std::wstring s2ws(const std::string &str)
{
  std::wstring r;
  LPWSTR szTextW = new WCHAR[str.size()+1];
  MultiByteToWideChar(0, 0, str.c_str(), -1, szTextW, (int)str.size()+1);
  r = szTextW;
  delete [] szTextW;
  return r;
}


int DownloadFile(LPCTSTR szUri, LPCTSTR szFileName)
{
  printf("DownloadFile...");
  HINTERNET hInt = InternetOpen(_T("MySampleDownload/1.0"), INTERNET_OPEN_TYPE_PRECONFIG, NULL, NULL, 0);
  if (hInt == NULL)
  {
    printf("\n### ERR: Error opening internet connection\n");
    return 1;
  }
  HINTERNET hIntUrl = InternetOpenUrl(hInt, szUri, NULL, 0, 0, NULL);
  if (hIntUrl == NULL)
  {
    InternetCloseHandle(hInt);
    printf("\n### ERR: Error opening internet URL\n");
    return 2;
  }

  DWORD dwBytesRead = 0;
  BYTE buf[1024];
  BOOL bRet = FALSE;
  HANDLE hFile = INVALID_HANDLE_VALUE;
  while((bRet = InternetReadFile(hIntUrl, buf, sizeof(buf), &dwBytesRead)) == TRUE)
  {
    if (dwBytesRead == 0)
      break; // succeeded...

    printf(".");

    if (hFile == INVALID_HANDLE_VALUE)
      hFile = CreateFile(szFileName, GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, 0, NULL);
    if (hFile == INVALID_HANDLE_VALUE)
    {
      printf("\n### ERR: Could not create file\n");
      bRet = FALSE;
      break;
    }
    DWORD dwBytesWritten;
    bRet = WriteFile(hFile, buf, dwBytesRead, &dwBytesWritten, NULL);
    if (bRet == FALSE)
    {
      printf("\n### ERR: Error during file-writing\n");
      break;
    }
  }

  InternetCloseHandle(hIntUrl);
  InternetCloseHandle(hInt);
  if (hFile != INVALID_HANDLE_VALUE)
    CloseHandle(hFile);

  if (bRet == FALSE)
  {
    printf("\n### Error during file-download\n");
    return -1;
  }
  printf(" ok\n");

  return 0;
}


// The GetToken function needs to be called once before any web service request is made. Once
// the token is retrieved, it can be cached for use in subsequent web service requests.
// (as long as the time period is not expired)
std::string GetToken(LPCSTR szAccountID, LPCSTR szPassword, LPCSTR clientIPAddress, int validityDurationMinutes)
{
  printf("GetClientToken...");
  std::string token;

  // Use the CommonService to retrive a token
  CommonServiceSoap commonService;

  // register OpenSSL-Plugin for authentication
  soap_register_plugin(commonService.soap, http_da);

  // Set the token specification properties
  _ns1__GetClientToken input;
  ns1__TokenSpecification spec;
  input.specification = &spec;
  input.specification->ClientIPAddress = const_cast<char*>(clientIPAddress);
  input.specification->TokenValidityDurationMinutes = validityDurationMinutes;

  _ns1__GetClientTokenResponse response;

  // first try without authentication, so that the required fields are filled, if we need authentication ;)
  int soap_error = commonService.__ns1__GetClientToken(&input, &response);
  if (soap_error == 401) // HTTP authentication is required
  {
    if (strcmp(commonService.soap->authrealm, "MapPoint") == 0) // check authentication realm
    {
      struct http_da_info info; // store userid and passwd
      http_da_save(commonService.soap, &info, "MapPoint", szAccountID, szPassword);

      // Try again with authentication
      soap_error = commonService.__ns1__GetClientToken(&input, &response);
      if (soap_error == SOAP_OK)
      {
        token = response.GetClientTokenResult;
      }
    }
  }
  else
  {
    if (soap_error == SOAP_OK)
    {
      token = response.GetClientTokenResult;
    }
  }

  if (token.length() <= 0)
    printf("\n### ERR: Could not retrive tolken: %d\n", soap_error);
  else
    printf(" ok\n");

  return token;
}

std::string GetMapUri(LPCSTR token, double latitude, double longitude, int zoomLevel, int imageHeight, int imageWidth)
{
  printf("GetMapUri...");

  // Use the ImageryService to retrive an image for a location
  BasicHttpBinding_USCOREIImageryService imageryService;
  _ns12__GetMapUri getMapUriInput;
  _ns12__GetMapUriResponse mapUriResponse;

  // Fill in the credentials
  ns4__Credentials credentials;
  credentials.Token = const_cast<char*>(token);
  ns13__MapUriRequest request;
  getMapUriInput.request = &request;

  request.Credentials = &credentials;
  ns4__Location loc;
  request.Center = &loc;
  loc.Latitude = &latitude;
  loc.Longitude = &longitude;

  // Normal, flat-view:
  //Styles: ns4__MapStyle__Aerial; //ns4__MapStyle__Road; //ns4__MapStyle__AerialWithLabels;
  ns13__MapUriOptions opt;
  request.Options = &opt;
  ns4__MapStyle ms = ns4__MapStyle__AerialWithLabels;
  opt.Style = &ms;
  opt.ZoomLevel = &zoomLevel;
  ns4__SizeOfint si;
  opt.ImageSize = &si;

  si.Height = &imageHeight;
  si.Width = &imageWidth;

  int soap_error = imageryService.__ns13__GetMapUri(&getMapUriInput, &mapUriResponse);
  if (soap_error != SOAP_OK)
  {
    if (mapUriResponse.soap->fault != 0)
      printf("\n### ERR: %s: %s\n", mapUriResponse.soap->fault->faultcode, mapUriResponse.soap->fault->faultstring);
    else
      printf("\n### ERR: Calling SOAP function\n");
    return "";
  }
  printf(" ok\n");

  std::string mapUri = mapUriResponse.GetMapUriResult->Uri;

  // replace the token-string with my token...
  std::string::size_type pos = mapUri.find("{token}");
  if (pos != std::string::npos)
    mapUri.replace(pos, 7, token);

  //printf("MAP-Uri: %s\n", mapUri.c_str());

  return mapUri;
}


int _tmain(int argc, _TCHAR* argv[])
{
  // Get a Virtual Earth token before making a request
  std::string token = GetToken(VIRTUAL_EARTH_ACCOUNT_ID, VIRTUAL_EARTH_PASSWORD, IP_ADDRESS, 60);

  if (token.length() <= 0)
  {
    printf("\n### Could not retrive valid token...");
    return 1;
  }

  // Berandenburger Tor, Berlin, Germany
  std::string mapUri = GetMapUri(token.c_str(), 52.51628056168556, 13.377829939126963, 16, 600, 800);

  std::wstring ws = s2ws(mapUri);
  LPCTSTR szFileName = _T("map.jpg");
  if (DownloadFile(ws.c_str(), szFileName) == 0)
  {
    // Display the downloaded image:
    printf("Displaying image...");
    ShellExecute(NULL, _T("open"), szFileName, NULL, NULL, SW_SHOW);
    printf(" ok\n");
  }

  return 0;
}
