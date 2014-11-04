/* soapCommonServiceSoapProxy.h
   Generated by gSOAP 2.7.13 from VirtualEarth.h
   Copyright(C) 2000-2009, Robert van Engelen, Genivia Inc. All Rights Reserved.
   This part of the software is released under one of the following licenses:
   GPL, the gSOAP public license, or Genivia's license for commercial use.
*/

#ifndef soapCommonServiceSoapProxy_H
#define soapCommonServiceSoapProxy_H
#include "soapH.h"
class CommonServiceSoap
{   public:
	/// Runtime engine context allocated in constructor
	struct soap *soap;
	/// Endpoint URL of service 'CommonServiceSoap' (change as needed)
	const char *endpoint;
	/// Constructor allocates soap engine context, sets default endpoint URL, and sets namespace mapping table
	CommonServiceSoap()
	{ soap = soap_new(); endpoint = "http://staging.common.virtualearth.net/find-30/common.asmx"; if (soap && !soap->namespaces) { static const struct Namespace namespaces[] = 
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
	soap->namespaces = namespaces; } };
	/// Destructor frees deserialized data and soap engine context
	virtual ~CommonServiceSoap() { if (soap) { soap_destroy(soap); soap_end(soap); soap_free(soap); } };
	/// Invoke 'GetVersionInfo' of service 'CommonServiceSoap' and return error code (or SOAP_OK)
	virtual int __ns1__GetVersionInfo(_ns1__GetVersionInfo *ns1__GetVersionInfo, _ns1__GetVersionInfoResponse *ns1__GetVersionInfoResponse) { return soap ? soap_call___ns1__GetVersionInfo(soap, endpoint, NULL, ns1__GetVersionInfo, ns1__GetVersionInfoResponse) : SOAP_EOM; };
	/// Invoke 'GetCountryRegionInfo' of service 'CommonServiceSoap' and return error code (or SOAP_OK)
	virtual int __ns1__GetCountryRegionInfo(_ns1__GetCountryRegionInfo *ns1__GetCountryRegionInfo, _ns1__GetCountryRegionInfoResponse *ns1__GetCountryRegionInfoResponse) { return soap ? soap_call___ns1__GetCountryRegionInfo(soap, endpoint, NULL, ns1__GetCountryRegionInfo, ns1__GetCountryRegionInfoResponse) : SOAP_EOM; };
	/// Invoke 'GetEntityTypes' of service 'CommonServiceSoap' and return error code (or SOAP_OK)
	virtual int __ns1__GetEntityTypes(_ns1__GetEntityTypes *ns1__GetEntityTypes, _ns1__GetEntityTypesResponse *ns1__GetEntityTypesResponse) { return soap ? soap_call___ns1__GetEntityTypes(soap, endpoint, NULL, ns1__GetEntityTypes, ns1__GetEntityTypesResponse) : SOAP_EOM; };
	/// Invoke 'GetDataSourceInfo' of service 'CommonServiceSoap' and return error code (or SOAP_OK)
	virtual int __ns1__GetDataSourceInfo(_ns1__GetDataSourceInfo *ns1__GetDataSourceInfo, _ns1__GetDataSourceInfoResponse *ns1__GetDataSourceInfoResponse) { return soap ? soap_call___ns1__GetDataSourceInfo(soap, endpoint, NULL, ns1__GetDataSourceInfo, ns1__GetDataSourceInfoResponse) : SOAP_EOM; };
	/// Invoke 'GetGreatCircleDistances' of service 'CommonServiceSoap' and return error code (or SOAP_OK)
	virtual int __ns1__GetGreatCircleDistances(_ns1__GetGreatCircleDistances *ns1__GetGreatCircleDistances, _ns1__GetGreatCircleDistancesResponse *ns1__GetGreatCircleDistancesResponse) { return soap ? soap_call___ns1__GetGreatCircleDistances(soap, endpoint, NULL, ns1__GetGreatCircleDistances, ns1__GetGreatCircleDistancesResponse) : SOAP_EOM; };
	/// Invoke 'GetClientToken' of service 'CommonServiceSoap' and return error code (or SOAP_OK)
	virtual int __ns1__GetClientToken(_ns1__GetClientToken *ns1__GetClientToken, _ns1__GetClientTokenResponse *ns1__GetClientTokenResponse) { return soap ? soap_call___ns1__GetClientToken(soap, endpoint, NULL, ns1__GetClientToken, ns1__GetClientTokenResponse) : SOAP_EOM; };
};
#endif