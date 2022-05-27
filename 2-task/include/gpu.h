#pragma once
#include "ram.h"
#include <string>
#include <iostream>

namespace puter {
    struct Gpu {
        void display_ram(Ram& ram) {
            std::string buffer_ram = ram.read_ram(ram.buffer_ram); 
            std::cout << buffer_ram << std::endl;
        }
    };
}