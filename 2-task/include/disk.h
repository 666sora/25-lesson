#pragma once
#include "ram.h"
#include <fstream>
#include <string>

namespace puter {
    struct Disk {
        void save_ram(Ram& ram) {
            std::string string_ram = ram.read_ram(ram.buffer_ram);
            std::ofstream save_stream("save.txt");
            save_stream << string_ram;
            save_stream.close();
        }
        void load_ram(Ram& ram) {
            std::ifstream load_stream("save.txt");
            load_stream >> ram.buffer_ram;
            load_stream.close();
        }
    };
}