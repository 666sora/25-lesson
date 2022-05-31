#include "cpu.h"
#include <string>

int puter::Cpu::sum_ram(Ram ram) {
    std::string buffer_ram = ram.read_ram(ram.buffer_ram); 
    int sum_of_ram = 0;
    for (auto c: buffer_ram) {
        sum_of_ram += (int)c - '0';
    }
    return sum_of_ram;
}
