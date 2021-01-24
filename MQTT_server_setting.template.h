#ifndef __MQTT_SERVER_SETTING_H__
#define __MQTT_SERVER_SETTING_H__

#define IOTHUB_AUTH_CLIENT_SIDE_CERT    1
#define IOTHUB_AUTH_SYMMETRIC_KEY       2

// Set your authentication method here
//Azure
#define IOTHUB_AUTH_METHOD              IOTHUB_AUTH_CLIENT_SIDE_CERT

//Azure
#define DEVICE_ID                       "DEVICEID"
#define MQTT_SERVER_HOST_NAME           ".azure-devices.net"
#define MQTT_SERVER_PASSWORD            "ignored"   // If you're using symmetric key authentication, set this to an SAS Token



#define MQTT_SERVER_PORT                8883




/*
 * Root CA certificate here in PEM format.
 * "-----BEGIN CERTIFICATE-----\n"
 * ...
 * "-----END CERTIFICATE-----\n";
 */
// Obtained from https://os.mbed.com/users/AzureIoTClient/code/simplesample_mqtt/file/c48c89945a83/certs.c/
const char* SSL_CA_PEM =
/* Baltimore */
"-----BEGIN CERTIFICATE-----\r\n"
"MIIDdzCCAl+gAwIBAgIEAgAAuTANBgkqhkiG9w0BAQUFADBaMQswCQYDVQQGEwJJ\r\n"
"RTESMBAGA1UEChMJQmFsdGltb3JlMRMwEQYDVQQLEwpDeWJlclRydXN0MSIwIAYD\r\n"
"VQQDExlCYWx0aW1vcmUgQ3liZXJUcnVzdCBSb290MB4XDTAwMDUxMjE4NDYwMFoX\r\n"
"DTI1MDUxMjIzNTkwMFowWjELMAkGA1UEBhMCSUUxEjAQBgNVBAoTCUJhbHRpbW9y\r\n"
"ZTETMBEGA1UECxMKQ3liZXJUcnVzdDEiMCAGA1UEAxMZQmFsdGltb3JlIEN5YmVy\r\n"
"VHJ1c3QgUm9vdDCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBAKMEuyKr\r\n"
"mD1X6CZymrV51Cni4eiVgLGw41uOKymaZN+hXe2wCQVt2yguzmKiYv60iNoS6zjr\r\n"
"IZ3AQSsBUnuId9Mcj8e6uYi1agnnc+gRQKfRzMpijS3ljwumUNKoUMMo6vWrJYeK\r\n"
"mpYcqWe4PwzV9/lSEy/CG9VwcPCPwBLKBsua4dnKM3p31vjsufFoREJIE9LAwqSu\r\n"
"XmD+tqYF/LTdB1kC1FkYmGP1pWPgkAx9XbIGevOF6uvUA65ehD5f/xXtabz5OTZy\r\n"
"dc93Uk3zyZAsuT3lySNTPx8kmCFcB5kpvcY67Oduhjprl3RjM71oGDHweI12v/ye\r\n"
"jl0qhqdNkNwnGjkCAwEAAaNFMEMwHQYDVR0OBBYEFOWdWTCCR1jMrPoIVDaGezq1\r\n"
"BE3wMBIGA1UdEwEB/wQIMAYBAf8CAQMwDgYDVR0PAQH/BAQDAgEGMA0GCSqGSIb3\r\n"
"DQEBBQUAA4IBAQCFDF2O5G9RaEIFoN27TyclhAO992T9Ldcw46QQF+vaKSm2eT92\r\n"
"9hkTI7gQCvlYpNRhcL0EYWoSihfVCr3FvDB81ukMJY2GQE/szKN+OMY3EU/t3Wgx\r\n"
"jkzSswF07r51XgdIGn9w/xZchMB5hbgF/X++ZRGjD8ACtPhSNzkE1akxehi/oCr0\r\n"
"Epn3o0WC4zxe9Z2etciefC7IpJ5OCBRLbf1wbWsaY71k5h+3zvDyny67G7fyUIhz\r\n"
"ksLi4xaNmjICq44Y3ekQEe5+NauQrz4wlHrQMz2nZQ/1/I6eYs9HRCwBXbsdtTLS\r\n"
"R9I4LtD+gdwyah617jzV/OeBHRnDJELqYzmp\r\n"
"-----END CERTIFICATE-----\r\n"
/* Microsoft IT */
"-----BEGIN CERTIFICATE-----\r\n"
"MIIFtDCCBJygAwIBAgIQDywQyVsGwJN/uNRJ+D6FaTANBgkqhkiG9w0BAQsFADBa\r\n"
"MQswCQYDVQQGEwJJRTESMBAGA1UEChMJQmFsdGltb3JlMRMwEQYDVQQLEwpDeWJl\r\n"
"clRydXN0MSIwIAYDVQQDExlCYWx0aW1vcmUgQ3liZXJUcnVzdCBSb290MB4XDTE2\r\n"
"MDUyMDEyNTE1N1oXDTI0MDUyMDEyNTE1N1owgYsxCzAJBgNVBAYTAlVTMRMwEQYD\r\n"
"VQQIEwpXYXNoaW5ndG9uMRAwDgYDVQQHEwdSZWRtb25kMR4wHAYDVQQKExVNaWNy\r\n"
"b3NvZnQgQ29ycG9yYXRpb24xFTATBgNVBAsTDE1pY3Jvc29mdCBJVDEeMBwGA1UE\r\n"
"AxMVTWljcm9zb2Z0IElUIFRMUyBDQSAyMIICIjANBgkqhkiG9w0BAQEFAAOCAg8A\r\n"
"MIICCgKCAgEAnqoVwRuhY1/mURjFFrsR3AtNm5EKukBJK9zWBgvFd1ksNEJFC06o\r\n"
"yRbwKPMflpW/HtOfzIeBliGk57MwZq18bgASr70sPUWuoD917HUgBfxBYoF8zA7Z\r\n"
"Ie5zAHODFboJL7Fg/apgbQs/GiZZNCi0QkQUWzw0nTUmVSNQ0mz6pCu95Dv1WMsL\r\n"
"GyPGfdN9zD3Q/QEDyJ695QgjRIxYA1DUE+54ti2k6r0ycKFQYkyWwZ25HD1h2kYt\r\n"
"3ovW85vF6y7tjTqUEcLbgKUCB81/955hdLLsbFd6f9o2PkU8xuOc3U+bUedvv6Sb\r\n"
"tvGjBEZeFyH8/CaQhzlsKMH0+OPOFv/bMqcLarPw1V1sOV1bl4W9vi2278niblzI\r\n"
"bEHt7nN888p4KNIwqCcXaGhbtS4tjn3NKI6v1d2XRyxIvCJDjgoZ09zF39Pyoe92\r\n"
"sSRikZh7xns4tQEQ8BCs4o5NBSx8UxEsgyzNSskWGEWqsIjt+7+A1skDDZv6k2o8\r\n"
"VCHNbTLFKS7d72wMI4ErpzVsBIicxaG2ezuMBBuqThxIiJ+G9zfoP9lxim/9rvJA\r\n"
"xbh3nujA1VJfkOYTJIojEAYCxR3QjEoGdapJmBle97AfqEBnwoJsu2wav8h9v+po\r\n"
"DL4h6dRzRUxY1DHypcFlXGoHu/REQgFLq2IN30/AhQLN90Pj9TT2RQECAwEAAaOC\r\n"
"AUIwggE+MB0GA1UdDgQWBBSRnjtEbD1XnEJ3KjTXT9HMSpcs2jAfBgNVHSMEGDAW\r\n"
"gBTlnVkwgkdYzKz6CFQ2hns6tQRN8DASBgNVHRMBAf8ECDAGAQH/AgEAMA4GA1Ud\r\n"
"DwEB/wQEAwIBhjAnBgNVHSUEIDAeBggrBgEFBQcDAQYIKwYBBQUHAwIGCCsGAQUF\r\n"
"BwMJMDQGCCsGAQUFBwEBBCgwJjAkBggrBgEFBQcwAYYYaHR0cDovL29jc3AuZGln\r\n"
"aWNlcnQuY29tMDoGA1UdHwQzMDEwL6AtoCuGKWh0dHA6Ly9jcmwzLmRpZ2ljZXJ0\r\n"
"LmNvbS9PbW5pcm9vdDIwMjUuY3JsMD0GA1UdIAQ2MDQwMgYEVR0gADAqMCgGCCsG\r\n"
"AQUFBwIBFhxodHRwczovL3d3dy5kaWdpY2VydC5jb20vQ1BTMA0GCSqGSIb3DQEB\r\n"
"CwUAA4IBAQBsf+pqb89rW8E0rP/cDuB9ixMX4C9OWQ7EA7n0BSllR64ZmuhU9mTV\r\n"
"2L0G4HEiGXvOmt15i99wJ0ho2/dvMxm1ZeufkAfMuEc5fQ9RE5ENgNR2UCuFB2Bt\r\n"
"bVmaKUAWxscN4GpXS4AJv+/HS0VXs5Su19J0DA8Bg+lo8ekCl4dq2G1m1WsCvFBI\r\n"
"oLIjd4neCLlGoxT2jA43lj2JpQ/SMkLkLy9DXj/JHdsqJDR5ogcij4VIX8V+bVD0\r\n"
"NCw7kQa6Ulq9Zo0jDEq1at4zSeH4mV2PMM3LwIXBA2xo5sda1cnUWJo3Pq4uMgcL\r\n"
"e0t+fCut38NMkTl8F0arflspaqUVVUov\r\n"
"-----END CERTIFICATE-----\r\n";

#if IOTHUB_AUTH_METHOD == IOTHUB_AUTH_CLIENT_SIDE_CERT

/*
 * (optional) Client certificate here in PEM format.
 * Set NULL if you don't use.
 * "-----BEGIN CERTIFICATE-----\n"
 * ...
 * "-----END CERTIFICATE-----\n";
 */
const char* SSL_CLIENT_CERT_PEM = "-----BEGIN CERTIFICATE-----\n"
"-----END CERTIFICATE-----\n";

/*
 * (optional) Client private key here in PEM format.
 * Set NULL if you don't use.
 * "-----BEGIN RSA PRIVATE KEY-----\n"
 * ...
 * "-----END RSA PRIVATE KEY-----\n";
 */
const char* SSL_CLIENT_PRIVATE_KEY_PEM = "-----BEGIN RSA PRIVATE KEY-----\n"
"-----END RSA PRIVATE KEY-----\n";

#endif // IOTHUB_AUTH_METHOD == IOTHUB_AUTH_CLIENT_SIDE_CERT

#endif /* __MQTT_SERVER_SETTING_H__ */
