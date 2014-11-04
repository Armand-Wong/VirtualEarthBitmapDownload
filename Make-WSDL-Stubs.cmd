rem Store the files in a subdirectory
mkdir GeneratedFiles
cd GeneratedFiles
rem Be sure, that we delete all previous files
del *.* /q 
 
rem Specify the path to the gSOAP toolkit
set wsdl2h=..\gsoap\bin\win32\wsdl2h
set soapcpp2=..\gsoap\bin\win32\soapcpp2
 
rem TODO: First login and download common.wsdl from https://staging.common.virtualearth.net/find-30/common.asmx?wsdl
 
rem Generate the h-files
rem Do NOT break this line!
%wsdl2h% -s -o VirtualEarth.h ..\common.wsdl http://staging.dev.virtualearth.net/webservices/v1/searchservice/searchservice.svc?wsdl http://staging.dev.virtualearth.net/webservices/v1/geocodeservice/geocodeservice.svc?wsdl http://staging.dev.virtualearth.net/webservices/v1/imageryservice/imageryservice.svc?wsdl http://staging.dev.virtualearth.net/webservices/v1/routeservice/routeservice.svc?wsdl
 
rem Generate the proxy-files
%soapcpp2% VirtualEarth.h
 
cd..
