#pragma once
#include "kbd.h"
#include <string>

namespace puter {
    struct Ram {
        std::string buffer_ram;

        std::string write_ram(std::string string_ram);
        std::string read_ram(std::string string_ram);
    };
}
