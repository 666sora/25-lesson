#pragma once
#include <iostream>

namespace surgery {
    struct Coordinate {
        double x_coordinate = 0;
        double y_coordinate = 0;

        void input_x(double& x) {
            std::cout << "Input x: ";
            std::cin >> x_coordinate;
        }
        void input_y(double& y) {
            std::cout << "Input y: ";
            std::cin >> y_coordinate;
        }
    };
} 
