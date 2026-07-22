#ifndef JOGADOR_HPP
#define JOGADOR_HPP

#include <string>

class Jogador {
private:
    std::string nome;
    int astucia = 1;
    int sanidade = 1;
    int inteligencia = 1;
    int resiliencia = 1;
    int vida = 50;

public:
    Jogador() = default;

    void criarPersonagem();
    void exibirFicha() const;

    std::string getNome() const;
    int getAstucia() const;
    int getSanidade() const;
    int getInteligencia() const;
    int getResiliencia() const;
    int getVida() const;

    void receberDano(int dano);
    bool estaVivo() const;
    void restaurarVida();
};

#endif