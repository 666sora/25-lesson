#include <iostream>
#include <string>
#include "kbd.h"

void puter::Kbd::input_ram(std::string& buffer_ram) {
    std::cout << "Input numbers: ";
    std::cin >> buffer_ram;
}
