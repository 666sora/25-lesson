#include <iostream>
#include "coordinates.h"
#include "tools.h"


int main() {
    surgery::Coordinate coordinate_scalpel[2];

    for (int i = 0; i < 2; ++i) {
        coordinate_scalpel[i].input_x(coordinate_scalpel[i].x_coordinate);
        coordinate_scalpel[i].input_y(coordinate_scalpel[i].y_coordinate);
    }
    surgery::scalpel(coordinate_scalpel);

    surgery::Coordinate coordinate_suture[2];

    while ((coordinate_scalpel[0].x_coordinate != coordinate_suture[0].x_coordinate
            && coordinate_scalpel[0].y_coordinate != coordinate_suture[0].y_coordinate)
            && (coordinate_scalpel[1].x_coordinate != coordinate_suture[1].x_coordinate
            && coordinate_scalpel[1].y_coordinate != coordinate_suture[1].y_coordinate)) {
        std::string answer = "";
        std::cout << "Which tool you need to use: ";
        std::cin >> answer;
        
        if (answer == "hemostat") {
            surgery::Coordinate coordinate_hemostat;
            coordinate_hemostat.input_x(coordinate_hemostat.x_coordinate);
            coordinate_hemostat.input_y(coordinate_hemostat.y_coordinate);
            surgery::hemostat(coordinate_hemostat);
        }
        else if (answer == "tweezers") {
            surgery::Coordinate coordinate_tweezers;
            coordinate_tweezers.input_x(coordinate_tweezers.x_coordinate);
            coordinate_tweezers.input_y(coordinate_tweezers.y_coordinate);
            surgery::tweezers(coordinate_tweezers);
        }
        else if (answer == "suture") {
            for (int i = 0; i < 2; ++i) {
                coordinate_suture[i].input_x(coordinate_suture[i].x_coordinate);
                coordinate_suture[i].input_y(coordinate_suture[i].y_coordinate);
            }
            surgery::suture(coordinate_suture);
        }
    }
}

/*
Реализуйте простой симулятор проведения медицинской операции у пациента. 
Пользователь выступает в роли хирурга, который запрашивает инструменты 
у ассистента и применяет их сообразно ситуации.
Пользователь взаимодействует с программой с помощью команд. 
Команды не имеют сложной встроенной логики: они просто принимают 
нужные данные в качестве аргументов и выводят сообщения в консоль 
о выполнении. Данные команд — это одна или две двумерные точки в 
формате double с координатами X и Y соответственно.
scalpel — принимает на вход две двумерные координаты начала и 
конца разреза или линии отсечения. При выполнении этой команды 
в консоль выводится сообщение о том, что был сделан разрез между введёнными координатами. 
hemostat — эта команда принимает на вход одну точку, 
в которой требуется сделать зажим, о чём также сообщает в консоль.
tweezers — пинцет, как и зажим, принимает одну точку 
для применения. Сообщение об этом выводится в консоль.
suture — команда хирургической иглы, которая делает шов между двумя указанными точками.
Операция всегда начинается с команды scalpel и заканчивается 
командой suture. Для окончания работы программы их параметры-точки при этом должны совпасть.
Программу требуется реализовать именно с помощью одного заголовочного 
файла и одного файла с исходным кодом (cpp). В заголовочном файле 
должны находиться функции-инструменты. В основном файле — 
основная логика программы, обработка ввода пользователя.
*/