/* soapBasicHttpBinding_USCOREISearchServiceProxy.h
   Generated by gSOAP 2.7.13 from VirtualEarth.h
   Copyright(C) 2000-2009, Robert van Engelen, Genivia Inc. All Rights Reserved.
   This part of the software is released under one of the following licenses:
   GPL, the gSOAP public license, or Genivia's license for commercial use.
*/

#ifndef soapBasicHttpBinding_USCOREISearchServiceProxy_H
#define soapBasicHttpBinding_USCOREISearchServiceProxy_H
#include "soapH.h"
class BasicHttpBinding_USCOREISearchService
{   public:
	/// Runtime engine context allocated in constructor
	struct soap *soap;
	/// Endpoint URL of service 'BasicHttpBinding_USCOREISearchService' (change as needed)
	const char *endpoint;
	/// Constructor allocates soap engine context, sets default endpoint URL, and sets namespace mapping table
	BasicHttpBinding_USCOREISearchService()
	{ soap = soap_new(); endpoint = "http://staging.dev.virtualearth.net/webservices/v1/searchservice/searchservice.svc"; if (soap && !soap->namespaces) { static const struct Namespace namespaces[] = 
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
	virtual ~BasicHttpBinding_USCOREISearchService() { if (soap) { soap_destroy(soap); soap_end(soap); soap_free(soap); } };
	/// Invoke 'Search' of service 'BasicHttpBinding_USCOREISearchService' and return error code (or SOAP_OK)
	virtual int __ns6__Search(_ns3__Search *ns3__Search, _ns3__SearchResponse *ns3__SearchResponse) { return soap ? soap_call___ns6__Search(soap, endpoint, NULL, ns3__Search, ns3__SearchResponse) : SOAP_EOM; };
};
#endif
