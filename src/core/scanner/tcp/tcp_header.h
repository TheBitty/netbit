#pragma once

#include <string>
#include <pcap.h>

struct tcp_header{
     unsigned short source_port;
     unsigned short destination_port;

};