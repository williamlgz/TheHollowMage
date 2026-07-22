#include "Inimigo.hpp"

using namespace std;

Inimigo::Inimigo(string n, int v, int a) : nome(n), vida(v), ataque(a) {}

string Inimigo::getNome() const { return nome; }
int Inimigo::getVida() const { return vida; }
int Inimigo::getAtaque() const { return ataque; }

void Inimigo::receberDano(int dano) {
    vida -= dano;
    if (vida < 0) vida = 0;
}

bool Inimigo::estaVivo() const { return vida > 0; }