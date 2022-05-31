#include "gpu.h"
#include <string>
#include <iostream>

void puter::Gpu::display_ram(Ram& ram) {
    std::string buffer_ram = ram.read_ram(ram.buffer_ram); 
    std::cout << buffer_ram << std::endl;
}

