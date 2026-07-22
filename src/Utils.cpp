#include "Utils.hpp"
#include <iostream>
#include <cstdlib>
#include <string>

int sorteia(int min, int max) {
    return min + rand() % (max - min + 1);
}

void limpa() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void pausar() {
    std::string enter;
    std::getline(std::cin, enter);
}