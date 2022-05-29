#include <iostream>
#include <string>

namespace puter {
    struct Kbd {
        void input_ram(std::string& buffer_ram) {
            std::cout << "Input numbers: ";
            std::cin >> buffer_ram;
        }
    };
}