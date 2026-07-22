#include "Capitulo1.hpp"
#include <cstdlib>
#include <ctime>

#ifdef _WIN32
#include <windows.h>
#endif

int main() {
#ifdef _WIN32
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);       
#endif

    srand(static_cast<unsigned int>(time(NULL)));

    Capitulo1 jogo;
    jogo.iniciar();

    return 0;
}