#ifndef INIMIGO_HPP
#define INIMIGO_HPP

#include <string>

class Inimigo {
private:
    std::string nome;
    int vida;
    int ataque;

public:
    Inimigo(std::string n, int v, int a);

    std::string getNome() const;
    int getVida() const;
    int getAtaque() const;

    void receberDano(int dano);
    bool estaVivo() const;
};

#endif