#pragma once

namespace surgery {
    void scalpel(Coordinate coordinate[2]) {
        std::cout << "Cut from(x, y): ("
             << coordinate[0].x_coordinate << ", " << coordinate[0].y_coordinate << ")";
        std::cout << " to (" << coordinate[1].x_coordinate << ", " << coordinate[1].y_coordinate << ")" << std::endl; 
    }
    
    void hemostat(Coordinate coordinate) {
        std::cout << "Hemostat onto(x, y): (" << coordinate.x_coordinate << ", " << coordinate.y_coordinate << ")" << std::endl;
    }

    void tweezers(Coordinate coordinate) {
        std::cout << "Tweezers onto(x, y): (" << coordinate.x_coordinate << ", " << coordinate.y_coordinate << ")" << std::endl;
    }

    void suture(Coordinate coordinate[2]) {
        std::cout << "Stitch from(x, y): ("
             << coordinate[0].x_coordinate << ", " << coordinate[0].y_coordinate << ")";
        std::cout << " to (" << coordinate[1].x_coordinate << ", " << coordinate[1].y_coordinate << ")" << std::endl;
    }
}