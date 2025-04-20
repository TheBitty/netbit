cmake_minimum_required(VERSION 3.30)
project(unixnetworktapper)

set(CMAKE_CXX_STANDARD 23)

add_executable(unixnetworktapper
        src/core/main.cpp
        src/core/scanner/tcp/tcp_header.h
        src/core/scanner/tcp/tcp_header.h
        src/core/logger/ults/logger.cpp
        src/core/logger/ults/logger.h
        src/core/scanner/network_interface/interface.h)
