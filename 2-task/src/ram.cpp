#include "ram.h"
#include <string>

std::string puter::Ram::write_ram(std::string string_ram) {
    Kbd kbd;
    kbd.input_ram(string_ram);
    return string_ram;
}

std::string puter::Ram::read_ram(std::string string_ram) {
    return string_ram;
}
