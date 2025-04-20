#pragma once

#include <pcap.h>

#include <string>

class network_interface{ // this will be the parent class
  public:

  std::string &interface(); // this will have to get our machine network interface

  private:

    };