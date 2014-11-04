/* soapBasicHttpBinding_USCOREISearchServiceObject.h
   Generated by gSOAP 2.7.13 from VirtualEarth.h
   Copyright(C) 2000-2009, Robert van Engelen, Genivia Inc. All Rights Reserved.
   This part of the software is released under one of the following licenses:
   GPL, the gSOAP public license, or Genivia's license for commercial use.
*/

#ifndef soapBasicHttpBinding_USCOREISearchServiceObject_H
#define soapBasicHttpBinding_USCOREISearchServiceObject_H
#include "soapH.h"

/******************************************************************************\
 *                                                                            *
 * Service Object                                                             *
 *                                                                            *
\******************************************************************************/

class BasicHttpBinding_USCOREISearchServiceService : public soap
{    public:
	BasicHttpBinding_USCOREISearchServiceService()
	{ static const struct Namespace namespaces[] =
{
	{"SOAP-ENV", "http://schemas.xmlsoap.org/soap/envelope/", "http://www.w3.org/*/soap-envelope", NULL},
	{"SOAP-ENC", "http://schemas.xmlsoap.org/soap/encoding/", "http://www.w3.org/*/soap-encoding", NULL},
	{"xsi", "http://www.w3.org/2001/XMLSchema-instance", "http://www.w3.org/*/XMLSchema-instance", NULL},
	{"xsd", "http://www.w3.org/2001/XMLSchema", "http://www.w3.org/*/XMLSchema", NULL},
	{"ns4", "http://dev.virtualearth.net/webservices/v1/common", NULL, NULL},
	{"ns5", "http://schemas.microsoft.com/2003/10/Serialization/", NULL, NULL},
	{"ns7", "http://schemas.microsoft.com/2003/10/Serialization/Arrays", NULL, NULL},
	{"ns1", "http://s.mappoint.net/mappoint-30/", NULL, NULL},
	{"ns10", "http://dev.virtualearth.net/webservices/v1/geocode", NULL, NULL},
	{"ns9", "http://dev.virtualearth.net/webservices/v1/geocode/contracts", NULL, NULL},
	{"ns13", "http://dev.virtualearth.net/webservices/v1/imagery", NULL, NULL},
	{"ns12", "http://dev.virtualearth.net/webservices/v1/imagery/contracts", NULL, NULL},
	{"ns16", "http://dev.virtualearth.net/webservices/v1/route", NULL, NULL},
	{"ns15", "http://dev.virtualearth.net/webservices/v1/route/contracts", NULL, NULL},
	{"ns6", "http://dev.virtualearth.net/webservices/v1/search", NULL, NULL},
	{"ns3", "http://dev.virtualearth.net/webservices/v1/search/contracts", NULL, NULL},
	{NULL, NULL, NULL, NULL}
};
	if (!this->namespaces) this->namespaces = namespaces; };
	virtual ~BasicHttpBinding_USCOREISearchServiceService() { };
	/// Bind service to port (returns master socket or SOAP_INVALID_SOCKET)
	virtual	SOAP_SOCKET bind(const char *host, int port, int backlog) { return soap_bind(this, host, port, backlog); };
	/// Accept next request (returns socket or SOAP_INVALID_SOCKET)
	virtual	SOAP_SOCKET accept() { return soap_accept(this); };
	/// Serve this request (returns error code or SOAP_OK)
	virtual	int serve() { return soap_serve(this); };
};

/******************************************************************************\
 *                                                                            *
 * Service Operations (you should define these globally)                      *
 *                                                                            *
\******************************************************************************/


SOAP_FMAC5 int SOAP_FMAC6 __ns1__GetVersionInfo(struct soap*, _ns1__GetVersionInfo *ns1__GetVersionInfo, _ns1__GetVersionInfoResponse *ns1__GetVersionInfoResponse);

SOAP_FMAC5 int SOAP_FMAC6 __ns1__GetCountryRegionInfo(struct soap*, _ns1__GetCountryRegionInfo *ns1__GetCountryRegionInfo, _ns1__GetCountryRegionInfoResponse *ns1__GetCountryRegionInfoResponse);

SOAP_FMAC5 int SOAP_FMAC6 __ns1__GetEntityTypes(struct soap*, _ns1__GetEntityTypes *ns1__GetEntityTypes, _ns1__GetEntityTypesResponse *ns1__GetEntityTypesResponse);

SOAP_FMAC5 int SOAP_FMAC6 __ns1__GetDataSourceInfo(struct soap*, _ns1__GetDataSourceInfo *ns1__GetDataSourceInfo, _ns1__GetDataSourceInfoResponse *ns1__GetDataSourceInfoResponse);

SOAP_FMAC5 int SOAP_FMAC6 __ns1__GetGreatCircleDistances(struct soap*, _ns1__GetGreatCircleDistances *ns1__GetGreatCircleDistances, _ns1__GetGreatCircleDistancesResponse *ns1__GetGreatCircleDistancesResponse);

SOAP_FMAC5 int SOAP_FMAC6 __ns1__GetClientToken(struct soap*, _ns1__GetClientToken *ns1__GetClientToken, _ns1__GetClientTokenResponse *ns1__GetClientTokenResponse);

SOAP_FMAC5 int SOAP_FMAC6 __ns10__Geocode(struct soap*, _ns9__Geocode *ns9__Geocode, _ns9__GeocodeResponse *ns9__GeocodeResponse);

SOAP_FMAC5 int SOAP_FMAC6 __ns10__ReverseGeocode(struct soap*, _ns9__ReverseGeocode *ns9__ReverseGeocode, _ns9__ReverseGeocodeResponse *ns9__ReverseGeocodeResponse);

SOAP_FMAC5 int SOAP_FMAC6 __ns13__GetImageryMetadata(struct soap*, _ns12__GetImageryMetadata *ns12__GetImageryMetadata, _ns12__GetImageryMetadataResponse *ns12__GetImageryMetadataResponse);

SOAP_FMAC5 int SOAP_FMAC6 __ns13__GetMapUri(struct soap*, _ns12__GetMapUri *ns12__GetMapUri, _ns12__GetMapUriResponse *ns12__GetMapUriResponse);

SOAP_FMAC5 int SOAP_FMAC6 __ns16__CalculateRoute(struct soap*, _ns15__CalculateRoute *ns15__CalculateRoute, _ns15__CalculateRouteResponse *ns15__CalculateRouteResponse);

SOAP_FMAC5 int SOAP_FMAC6 __ns16__CalculateRoutesFromMajorRoads(struct soap*, _ns15__CalculateRoutesFromMajorRoads *ns15__CalculateRoutesFromMajorRoads, _ns15__CalculateRoutesFromMajorRoadsResponse *ns15__CalculateRoutesFromMajorRoadsResponse);

SOAP_FMAC5 int SOAP_FMAC6 __ns6__Search(struct soap*, _ns3__Search *ns3__Search, _ns3__SearchResponse *ns3__SearchResponse);

#endif
