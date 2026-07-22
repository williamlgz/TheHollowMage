#ifndef CAPITULO1_HPP
#define CAPITULO1_HPP

#include "Jogador.hpp"
#include "Inimigo.hpp"

class Capitulo1 {
private:
    Jogador jogador;
    int morte = 0;
    int checkpoint1 = 0;
    int c1completo = 0;

    bool desafioEnigma();
    bool desafioCombate();
    bool processarMorte();

public:
    void iniciar();
};

#endif