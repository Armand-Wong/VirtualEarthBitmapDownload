/* soapClient.cpp
   Generated by gSOAP 2.7.13 from VirtualEarth.h
   Copyright(C) 2000-2009, Robert van Engelen, Genivia Inc. All Rights Reserved.
   This part of the software is released under one of the following licenses:
   GPL, the gSOAP public license, or Genivia's license for commercial use.
*/

#if defined(__BORLANDC__)
#pragma option push -w-8060
#pragma option push -w-8004
#endif
#include "soapH.h"

SOAP_SOURCE_STAMP("@(#) soapClient.cpp ver 2.7.13 2009-04-23 18:16:49 GMT")


SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__GetVersionInfo(struct soap *soap, const char *soap_endpoint, const char *soap_action, _ns1__GetVersionInfo *ns1__GetVersionInfo, _ns1__GetVersionInfoResponse *ns1__GetVersionInfoResponse)
{	struct __ns1__GetVersionInfo soap_tmp___ns1__GetVersionInfo;
	if (!soap_endpoint)
		soap_endpoint = "http://staging.common.virtualearth.net/find-30/common.asmx";
	if (!soap_action)
		soap_action = "http://s.mappoint.net/mappoint-30/GetVersionInfo";
	soap->encodingStyle = NULL;
	soap_tmp___ns1__GetVersionInfo.ns1__GetVersionInfo = ns1__GetVersionInfo;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns1__GetVersionInfo(soap, &soap_tmp___ns1__GetVersionInfo);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__GetVersionInfo(soap, &soap_tmp___ns1__GetVersionInfo, "-ns1:GetVersionInfo", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__GetVersionInfo(soap, &soap_tmp___ns1__GetVersionInfo, "-ns1:GetVersionInfo", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns1__GetVersionInfoResponse)
		return soap_closesock(soap);
	ns1__GetVersionInfoResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__GetVersionInfoResponse->soap_get(soap, "ns1:GetVersionInfoResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__GetCountryRegionInfo(struct soap *soap, const char *soap_endpoint, const char *soap_action, _ns1__GetCountryRegionInfo *ns1__GetCountryRegionInfo, _ns1__GetCountryRegionInfoResponse *ns1__GetCountryRegionInfoResponse)
{	struct __ns1__GetCountryRegionInfo soap_tmp___ns1__GetCountryRegionInfo;
	if (!soap_endpoint)
		soap_endpoint = "http://staging.common.virtualearth.net/find-30/common.asmx";
	if (!soap_action)
		soap_action = "http://s.mappoint.net/mappoint-30/GetCountryRegionInfo";
	soap->encodingStyle = NULL;
	soap_tmp___ns1__GetCountryRegionInfo.ns1__GetCountryRegionInfo = ns1__GetCountryRegionInfo;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns1__GetCountryRegionInfo(soap, &soap_tmp___ns1__GetCountryRegionInfo);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__GetCountryRegionInfo(soap, &soap_tmp___ns1__GetCountryRegionInfo, "-ns1:GetCountryRegionInfo", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__GetCountryRegionInfo(soap, &soap_tmp___ns1__GetCountryRegionInfo, "-ns1:GetCountryRegionInfo", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns1__GetCountryRegionInfoResponse)
		return soap_closesock(soap);
	ns1__GetCountryRegionInfoResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__GetCountryRegionInfoResponse->soap_get(soap, "ns1:GetCountryRegionInfoResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__GetEntityTypes(struct soap *soap, const char *soap_endpoint, const char *soap_action, _ns1__GetEntityTypes *ns1__GetEntityTypes, _ns1__GetEntityTypesResponse *ns1__GetEntityTypesResponse)
{	struct __ns1__GetEntityTypes soap_tmp___ns1__GetEntityTypes;
	if (!soap_endpoint)
		soap_endpoint = "http://staging.common.virtualearth.net/find-30/common.asmx";
	if (!soap_action)
		soap_action = "http://s.mappoint.net/mappoint-30/GetEntityTypes";
	soap->encodingStyle = NULL;
	soap_tmp___ns1__GetEntityTypes.ns1__GetEntityTypes = ns1__GetEntityTypes;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns1__GetEntityTypes(soap, &soap_tmp___ns1__GetEntityTypes);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__GetEntityTypes(soap, &soap_tmp___ns1__GetEntityTypes, "-ns1:GetEntityTypes", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__GetEntityTypes(soap, &soap_tmp___ns1__GetEntityTypes, "-ns1:GetEntityTypes", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns1__GetEntityTypesResponse)
		return soap_closesock(soap);
	ns1__GetEntityTypesResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__GetEntityTypesResponse->soap_get(soap, "ns1:GetEntityTypesResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__GetDataSourceInfo(struct soap *soap, const char *soap_endpoint, const char *soap_action, _ns1__GetDataSourceInfo *ns1__GetDataSourceInfo, _ns1__GetDataSourceInfoResponse *ns1__GetDataSourceInfoResponse)
{	struct __ns1__GetDataSourceInfo soap_tmp___ns1__GetDataSourceInfo;
	if (!soap_endpoint)
		soap_endpoint = "http://staging.common.virtualearth.net/find-30/common.asmx";
	if (!soap_action)
		soap_action = "http://s.mappoint.net/mappoint-30/GetDataSourceInfo";
	soap->encodingStyle = NULL;
	soap_tmp___ns1__GetDataSourceInfo.ns1__GetDataSourceInfo = ns1__GetDataSourceInfo;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns1__GetDataSourceInfo(soap, &soap_tmp___ns1__GetDataSourceInfo);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__GetDataSourceInfo(soap, &soap_tmp___ns1__GetDataSourceInfo, "-ns1:GetDataSourceInfo", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__GetDataSourceInfo(soap, &soap_tmp___ns1__GetDataSourceInfo, "-ns1:GetDataSourceInfo", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns1__GetDataSourceInfoResponse)
		return soap_closesock(soap);
	ns1__GetDataSourceInfoResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__GetDataSourceInfoResponse->soap_get(soap, "ns1:GetDataSourceInfoResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__GetGreatCircleDistances(struct soap *soap, const char *soap_endpoint, const char *soap_action, _ns1__GetGreatCircleDistances *ns1__GetGreatCircleDistances, _ns1__GetGreatCircleDistancesResponse *ns1__GetGreatCircleDistancesResponse)
{	struct __ns1__GetGreatCircleDistances soap_tmp___ns1__GetGreatCircleDistances;
	if (!soap_endpoint)
		soap_endpoint = "http://staging.common.virtualearth.net/find-30/common.asmx";
	if (!soap_action)
		soap_action = "http://s.mappoint.net/mappoint-30/GetGreatCircleDistances";
	soap->encodingStyle = NULL;
	soap_tmp___ns1__GetGreatCircleDistances.ns1__GetGreatCircleDistances = ns1__GetGreatCircleDistances;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns1__GetGreatCircleDistances(soap, &soap_tmp___ns1__GetGreatCircleDistances);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__GetGreatCircleDistances(soap, &soap_tmp___ns1__GetGreatCircleDistances, "-ns1:GetGreatCircleDistances", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__GetGreatCircleDistances(soap, &soap_tmp___ns1__GetGreatCircleDistances, "-ns1:GetGreatCircleDistances", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns1__GetGreatCircleDistancesResponse)
		return soap_closesock(soap);
	ns1__GetGreatCircleDistancesResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__GetGreatCircleDistancesResponse->soap_get(soap, "ns1:GetGreatCircleDistancesResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__GetClientToken(struct soap *soap, const char *soap_endpoint, const char *soap_action, _ns1__GetClientToken *ns1__GetClientToken, _ns1__GetClientTokenResponse *ns1__GetClientTokenResponse)
{	struct __ns1__GetClientToken soap_tmp___ns1__GetClientToken;
	if (!soap_endpoint)
		soap_endpoint = "http://staging.common.virtualearth.net/find-30/common.asmx";
	if (!soap_action)
		soap_action = "http://s.mappoint.net/mappoint-30/GetClientToken";
	soap->encodingStyle = NULL;
	soap_tmp___ns1__GetClientToken.ns1__GetClientToken = ns1__GetClientToken;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns1__GetClientToken(soap, &soap_tmp___ns1__GetClientToken);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__GetClientToken(soap, &soap_tmp___ns1__GetClientToken, "-ns1:GetClientToken", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__GetClientToken(soap, &soap_tmp___ns1__GetClientToken, "-ns1:GetClientToken", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns1__GetClientTokenResponse)
		return soap_closesock(soap);
	ns1__GetClientTokenResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__GetClientTokenResponse->soap_get(soap, "ns1:GetClientTokenResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns10__Geocode(struct soap *soap, const char *soap_endpoint, const char *soap_action, _ns9__Geocode *ns9__Geocode, _ns9__GeocodeResponse *ns9__GeocodeResponse)
{	struct __ns10__Geocode soap_tmp___ns10__Geocode;
	if (!soap_endpoint)
		soap_endpoint = "http://staging.dev.virtualearth.net/webservices/v1/geocodeservice/GeocodeService.svc";
	if (!soap_action)
		soap_action = "http://dev.virtualearth.net/webservices/v1/geocode/contracts/IGeocodeService/Geocode";
	soap->encodingStyle = NULL;
	soap_tmp___ns10__Geocode.ns9__Geocode = ns9__Geocode;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns10__Geocode(soap, &soap_tmp___ns10__Geocode);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns10__Geocode(soap, &soap_tmp___ns10__Geocode, "-ns10:Geocode", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns10__Geocode(soap, &soap_tmp___ns10__Geocode, "-ns10:Geocode", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns9__GeocodeResponse)
		return soap_closesock(soap);
	ns9__GeocodeResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns9__GeocodeResponse->soap_get(soap, "ns9:GeocodeResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns10__ReverseGeocode(struct soap *soap, const char *soap_endpoint, const char *soap_action, _ns9__ReverseGeocode *ns9__ReverseGeocode, _ns9__ReverseGeocodeResponse *ns9__ReverseGeocodeResponse)
{	struct __ns10__ReverseGeocode soap_tmp___ns10__ReverseGeocode;
	if (!soap_endpoint)
		soap_endpoint = "http://staging.dev.virtualearth.net/webservices/v1/geocodeservice/GeocodeService.svc";
	if (!soap_action)
		soap_action = "http://dev.virtualearth.net/webservices/v1/geocode/contracts/IGeocodeService/ReverseGeocode";
	soap->encodingStyle = NULL;
	soap_tmp___ns10__ReverseGeocode.ns9__ReverseGeocode = ns9__ReverseGeocode;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns10__ReverseGeocode(soap, &soap_tmp___ns10__ReverseGeocode);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns10__ReverseGeocode(soap, &soap_tmp___ns10__ReverseGeocode, "-ns10:ReverseGeocode", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns10__ReverseGeocode(soap, &soap_tmp___ns10__ReverseGeocode, "-ns10:ReverseGeocode", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns9__ReverseGeocodeResponse)
		return soap_closesock(soap);
	ns9__ReverseGeocodeResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns9__ReverseGeocodeResponse->soap_get(soap, "ns9:ReverseGeocodeResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns13__GetImageryMetadata(struct soap *soap, const char *soap_endpoint, const char *soap_action, _ns12__GetImageryMetadata *ns12__GetImageryMetadata, _ns12__GetImageryMetadataResponse *ns12__GetImageryMetadataResponse)
{	struct __ns13__GetImageryMetadata soap_tmp___ns13__GetImageryMetadata;
	if (!soap_endpoint)
		soap_endpoint = "http://staging.dev.virtualearth.net/webservices/v1/imageryservice/imageryservice.svc";
	if (!soap_action)
		soap_action = "http://dev.virtualearth.net/webservices/v1/imagery/contracts/IImageryService/GetImageryMetadata";
	soap->encodingStyle = NULL;
	soap_tmp___ns13__GetImageryMetadata.ns12__GetImageryMetadata = ns12__GetImageryMetadata;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns13__GetImageryMetadata(soap, &soap_tmp___ns13__GetImageryMetadata);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns13__GetImageryMetadata(soap, &soap_tmp___ns13__GetImageryMetadata, "-ns13:GetImageryMetadata", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns13__GetImageryMetadata(soap, &soap_tmp___ns13__GetImageryMetadata, "-ns13:GetImageryMetadata", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns12__GetImageryMetadataResponse)
		return soap_closesock(soap);
	ns12__GetImageryMetadataResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns12__GetImageryMetadataResponse->soap_get(soap, "ns12:GetImageryMetadataResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns13__GetMapUri(struct soap *soap, const char *soap_endpoint, const char *soap_action, _ns12__GetMapUri *ns12__GetMapUri, _ns12__GetMapUriResponse *ns12__GetMapUriResponse)
{	struct __ns13__GetMapUri soap_tmp___ns13__GetMapUri;
	if (!soap_endpoint)
		soap_endpoint = "http://staging.dev.virtualearth.net/webservices/v1/imageryservice/imageryservice.svc";
	if (!soap_action)
		soap_action = "http://dev.virtualearth.net/webservices/v1/imagery/contracts/IImageryService/GetMapUri";
	soap->encodingStyle = NULL;
	soap_tmp___ns13__GetMapUri.ns12__GetMapUri = ns12__GetMapUri;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns13__GetMapUri(soap, &soap_tmp___ns13__GetMapUri);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns13__GetMapUri(soap, &soap_tmp___ns13__GetMapUri, "-ns13:GetMapUri", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns13__GetMapUri(soap, &soap_tmp___ns13__GetMapUri, "-ns13:GetMapUri", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns12__GetMapUriResponse)
		return soap_closesock(soap);
	ns12__GetMapUriResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns12__GetMapUriResponse->soap_get(soap, "ns12:GetMapUriResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns16__CalculateRoute(struct soap *soap, const char *soap_endpoint, const char *soap_action, _ns15__CalculateRoute *ns15__CalculateRoute, _ns15__CalculateRouteResponse *ns15__CalculateRouteResponse)
{	struct __ns16__CalculateRoute soap_tmp___ns16__CalculateRoute;
	if (!soap_endpoint)
		soap_endpoint = "http://staging.dev.virtualearth.net/webservices/v1/routeservice/routeservice.svc";
	if (!soap_action)
		soap_action = "http://dev.virtualearth.net/webservices/v1/route/contracts/IRouteService/CalculateRoute";
	soap->encodingStyle = NULL;
	soap_tmp___ns16__CalculateRoute.ns15__CalculateRoute = ns15__CalculateRoute;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns16__CalculateRoute(soap, &soap_tmp___ns16__CalculateRoute);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns16__CalculateRoute(soap, &soap_tmp___ns16__CalculateRoute, "-ns16:CalculateRoute", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns16__CalculateRoute(soap, &soap_tmp___ns16__CalculateRoute, "-ns16:CalculateRoute", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns15__CalculateRouteResponse)
		return soap_closesock(soap);
	ns15__CalculateRouteResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns15__CalculateRouteResponse->soap_get(soap, "ns15:CalculateRouteResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns16__CalculateRoutesFromMajorRoads(struct soap *soap, const char *soap_endpoint, const char *soap_action, _ns15__CalculateRoutesFromMajorRoads *ns15__CalculateRoutesFromMajorRoads, _ns15__CalculateRoutesFromMajorRoadsResponse *ns15__CalculateRoutesFromMajorRoadsResponse)
{	struct __ns16__CalculateRoutesFromMajorRoads soap_tmp___ns16__CalculateRoutesFromMajorRoads;
	if (!soap_endpoint)
		soap_endpoint = "http://staging.dev.virtualearth.net/webservices/v1/routeservice/routeservice.svc";
	if (!soap_action)
		soap_action = "http://dev.virtualearth.net/webservices/v1/route/contracts/IRouteService/CalculateRoutesFromMajorRoads";
	soap->encodingStyle = NULL;
	soap_tmp___ns16__CalculateRoutesFromMajorRoads.ns15__CalculateRoutesFromMajorRoads = ns15__CalculateRoutesFromMajorRoads;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns16__CalculateRoutesFromMajorRoads(soap, &soap_tmp___ns16__CalculateRoutesFromMajorRoads);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns16__CalculateRoutesFromMajorRoads(soap, &soap_tmp___ns16__CalculateRoutesFromMajorRoads, "-ns16:CalculateRoutesFromMajorRoads", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns16__CalculateRoutesFromMajorRoads(soap, &soap_tmp___ns16__CalculateRoutesFromMajorRoads, "-ns16:CalculateRoutesFromMajorRoads", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns15__CalculateRoutesFromMajorRoadsResponse)
		return soap_closesock(soap);
	ns15__CalculateRoutesFromMajorRoadsResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns15__CalculateRoutesFromMajorRoadsResponse->soap_get(soap, "ns15:CalculateRoutesFromMajorRoadsResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns6__Search(struct soap *soap, const char *soap_endpoint, const char *soap_action, _ns3__Search *ns3__Search, _ns3__SearchResponse *ns3__SearchResponse)
{	struct __ns6__Search soap_tmp___ns6__Search;
	if (!soap_endpoint)
		soap_endpoint = "http://staging.dev.virtualearth.net/webservices/v1/searchservice/searchservice.svc";
	if (!soap_action)
		soap_action = "http://dev.virtualearth.net/webservices/v1/search/contracts/ISearchService/Search";
	soap->encodingStyle = NULL;
	soap_tmp___ns6__Search.ns3__Search = ns3__Search;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns6__Search(soap, &soap_tmp___ns6__Search);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns6__Search(soap, &soap_tmp___ns6__Search, "-ns6:Search", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns6__Search(soap, &soap_tmp___ns6__Search, "-ns6:Search", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns3__SearchResponse)
		return soap_closesock(soap);
	ns3__SearchResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns3__SearchResponse->soap_get(soap, "ns3:SearchResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

#if defined(__BORLANDC__)
#pragma option pop
#pragma option pop
#endif

/* End of soapClient.cpp */
