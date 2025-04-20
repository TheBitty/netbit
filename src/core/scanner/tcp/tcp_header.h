#pragma once

#include <string>
#include <pcap.h>

struct tcp_header{
     int port;
     int destination_port;
};