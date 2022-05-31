#pragma once
#include "ram.h"

namespace puter {
    struct Disk {
        void save_ram(Ram& ram);
        void load_ram(Ram& ram);
    };
}