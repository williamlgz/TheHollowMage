#include "Jogador.hpp"
#include "Utils.hpp"
#include <iostream>

using namespace std;

void Jogador::criarPersonagem() {
    int e1, e2;
    
    cout << "\n[Aperte Enter para prosseguir os balões de mensagens.]\nVocê abre os olhos e não enxerga nada além de escuridão ao seu redor.\n";
    pausar();
    cout << "A única coisa que você sabia, o que sentia no momento, era que estava caído de bruços em um chão frio e úmido.\n";
    pausar();
    cout << "Sua mente era um reflexo do que via: trevas.\n";
    pausar();
    cout << "Então... que tal preenchê-la com algo?\n";
    pausar();

    cout << "\nQual é seu nome?\nResposta: ";

    getline(cin, nome);

    cout << "\nO que você sente, " << nome << "?\n1. Medo\n2. Curiosidade\n3. Empolgação\n4. Nada\nOpção: ";
    cin >> e1;
    cin.ignore(1000, '\n');

    switch (e1) {
        case 1: inteligencia += 2; sanidade += 1; break;
        case 2: astucia += 2; resiliencia += 1; break;
        case 3: resiliencia += 2; astucia += 1; break;
        case 4: sanidade += 2; inteligencia += 1; break;
    }

    cout << "\nComo você se imagina ser?\n1. Alto e forte.\n2. Baixo e esguio.\n3. Velho e fraco.\n4. Normal.\nOpção: ";
    cin >> e2;
    cin.ignore(1000, '\n');

    switch (e2) {
        case 1: resiliencia += 2; astucia += 1; break;
        case 2: astucia += 2; resiliencia += 1; break;
        case 3: sanidade += 2; inteligencia += 1; break;
        case 4: inteligencia += 2; sanidade += 1; break;
    }

    cout << "\nO que precisa fazer primeiro?\n1. Achar a saída.\n2. Entender o que aconteceu.\n3. Sobreviver.\n4. Desistir.\nOpção: ";
    cin >> e2;
    cin.ignore(1000, '\n');

    switch (e2) {
        case 1: astucia += 2; resiliencia += 1; break;
        case 2: inteligencia += 2; sanidade += 1; break;
        case 3: resiliencia += 2; astucia += 1; break;
        case 4: sanidade += 2; inteligencia += 1; break;
    }

    exibirFicha();
}

void Jogador::exibirFicha() const {
    cout << "\n--- PERSONAGEM CRIADO ---\n"
         << "Nome: " << nome << "\n"
         << "Astúcia: " << astucia << "\n"
         << "Sanidade: " << sanidade << "\n"
         << "Inteligência: " << inteligencia << "\n"
         << "Resiliência: " << resiliencia << "\n"
         << "----------------------------\n\n";
}

string Jogador::getNome() const { return nome; }
int Jogador::getAstucia() const { return astucia; }
int Jogador::getSanidade() const { return sanidade; }
int Jogador::getInteligencia() const { return inteligencia; }
int Jogador::getResiliencia() const { return resiliencia; }
int Jogador::getVida() const { return vida; }

void Jogador::receberDano(int dano) {
    vida -= dano;
    if (vida < 0) vida = 0;
}

bool Jogador::estaVivo() const { return vida > 0; }
void Jogador::restaurarVida() { vida = 50; }