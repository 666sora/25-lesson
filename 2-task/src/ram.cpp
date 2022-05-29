#include "kbd.h"
#include <string>

namespace puter {
    struct Ram {
        std::string buffer_ram = "00000000";

        std::string write_ram(std::string string_ram) {
            Kbd kbd;
            kbd.input_ram(string_ram);
            return string_ram;
        }

        std::string read_ram(std::string string_ram) {
            return string_ram;
        }
    };
}
