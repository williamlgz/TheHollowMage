#include "Capitulo1.hpp"
#include "Utils.hpp"
#include <iostream>
#include <vector>

using namespace std;

bool Capitulo1::desafioEnigma() {
    string enter, resposta;
    int op;

    cout << "Você escolhe o túnel da esquerda e segue em frente pelo que pareceu ser uma eternidade até que finalmente encontra algo: um portão de ferro repleto de símbolos brilhantes, os quais você inicialmente desconhece. Mas sente que já os viu antes.";
    pausar();
    cout << "De repente, uma voz grave ecoa, parecendo sair das paredes da caverna:\n— Apenas aquele que domina as palavras arcanas poderá passar. Uma única palavra errada... e você será consumido.";
    pausar();

    if (jogador.getInteligencia() >= 3) {
        cout << "Você agora olha melhor para a porta e reconhece os símbolos, que pareciam seguir algum tipo de sequência na qual, a cada segundo, um brilhava mais que os outros. Você supõe que, por falta de algum cadeado visível, precise recitar as runas na ordem para abrir a passagem.";
        pausar();
        cout << "Você gostaria de tentar fazer isso ou voltar para a bifurcação?\n1. Continuar\n2. Retornar\nOpção: ";
        cin >> op;

        if (op == 1) {
            cin.ignore(1000, '\n');
            cout << "[Escreva cada palavra que apareça na tela na ordem correta, separando-as por vírgulas e sem espaço. Exemplo: mosquito,marechal,martelo]";
            pausar();
            limpa(); cout << "fogo"; pausar(); limpa();
            getline(cin, resposta);

            if (resposta == "fogo") {
                limpa(); cout << "água"; pausar(); limpa();
                getline(cin, resposta);

                if (resposta == "fogo,água") {
                    limpa(); cout << "ar"; pausar(); limpa();
                    getline(cin, resposta);

                    if (resposta == "fogo,água,ar") {
                        limpa(); cout << "terra"; pausar(); limpa();
                        getline(cin, resposta);

                        if (resposta == "fogo,água,ar,terra") {
                            limpa();
                            cout << "Depois de recitar todas as runas em voz alta, seu cajado brilha mais forte e os símbolos que restringiam o portão desaparecem para que este se abra. O caminho está livre agora.\n";
                            return true;
                        } else {
                            cout << "Uma rachadura se abre debaixo dos seus pés e você cai dentro de um buraco que, sem dar nem tempo para que você tente fazer algo, se fecha por completo e esmaga seu corpo.\n";
                        }
                    } else {
                        cout << "Você leva as mãos ao pescoço, incapaz de respirar, como se o oxigênio tivesse sido tirado do ar de uma hora para outra. Não demora muito para você sentir suas forças irem embora e desfalecer no chão.\n";
                    }
                } else {
                    cout << "Você ouve um barulho atrás de você e quando olha para trás, o caminho de onde tinha vindo não existia mais e, sem nem ter tempo para pensar no que fazer, buracos surgem por todos os lados do túnel e jatos potente de água são disparados por todos os lados, rapidamente inudando toda aquela seção e o afogando.\n";
                }
            } else {
                cout << "De repente seu corpo começa a arder em chamas azuis, consumindo seu corpo por completo enquanto você fica incapaz de fazer qualquer coisa, além de gritar em desespero, para apagá-las.\n";
            }
        } else {
            checkpoint1++;
            return false;
        }
    } else {
        cout << "Você não consegue entender os símbolos no momento, mas percebe que eles pareciam seguir uma sequência onde, a cada segundo, um brilhava mais que os outros, então supõe que precisava recitá-los em voz alta para passar. Você gostaria de tentar resolver o enigma ou voltar para a bifurcação?\n1. Resolver enigma\n2. Retornar\nOpção: ";
        cin >> op;

        if (op == 1) {
            cin.ignore(1000, '\n');
            cout << "[Adivinhe as palavras a qual cada símbolo represente e as escreva na ordem correta, separando-as por vírgulas e sem espaço. Exemplo: mosquito,marechal,martelo]";
            pausar();
            limpa(); cout << "Um símbolo laranja, que lembrava fagulhas de uma chama, brilha mais forte."; pausar(); limpa();
            getline(cin, resposta);

            if (resposta == "fogo") {
                limpa(); cout << "Um símbolo azul, parecido como uma onda, resplandece."; pausar(); limpa();
                getline(cin, resposta);

                if (resposta == "fogo,água") {
                    limpa(); cout << "Uma símbolo verde, que lembrava um tornado, se torna brilhante."; pausar(); limpa();
                    getline(cin, resposta);

                    if (resposta == "fogo,água,ar") {
                        limpa(); cout << "Por último um símbolo marrom, algo como um pedregulho, se destaca."; pausar(); limpa();
                        getline(cin, resposta);

                        if (resposta == "fogo,água,ar,terra") {
                            limpa();
                            cout << "Depois de recitar todas as runas em voz alta, seu cajado brilha mais forte e os símbolos que restringiam o portão desaparecem para que este se abra. O caminho está livre agora.\n";
                            return true;
                        } else {
                            cout << "Uma rachadura se abre abaixo dos seus pés e você cai dentro de um buraco que, sem dar nem tempo para que você tente fazer algo, ele se fecha por completo e esmaga seu corpo.\n";
                        }
                    } else {
                        cout << "Você leva as mãos ao pescoço, incapaz de respirar, era como se o oxigênio tivesse sido tirado do ar de uma hora para outra, e não demora muito para você sentir suas forças irem embora e desfalecer no chão.\n";
                    }
                } else {
                    cout << "Você ouve um barulho atrás de você e quando olha para trás, o caminho de onde você tinha vindo não existia mais e, sem nem ter tempo para pensar no que fazer, buracos surgem por todos os lados do túnel e jatos potente de água são disparados por todos os lados, rapidamente inudando toda aquela seção e o afogando.\n";
                }
            } else {
                cout << "De repente seu corpo começa a arder em chamas azuis, consumindo seu corpo por completo enquanto você fica incapaz de fazer qualquer coisa, além de gritar em desespero, para apagá-las.\n";
            }
        } else {
            checkpoint1++;
            return false;
        }
    }

    morte++;
    cout << "[Você morreu.]\n";
    return processarMorte();
}

bool Capitulo1::desafioCombate() {
    cout << "Você escolhe o túnel da direita e avança, mas logo sente o chão tremer. Três trolls surgem das trevas e bloqueiam seu caminho!";
    pausar();

    vector<Inimigo> trolls = {
        Inimigo("Troll Grandão", 20, 5),
        Inimigo("Troll Médio", 12, 3),
        Inimigo("Troll Pequeno", 8, 2)
    };

    cout << "\nVocê encontra três trolls! Prepare-se para o combate.\n";
    pausar();

    int inimigosVivos = 3;
    int escudoRodadas = 0;
    int op;

    while (jogador.estaVivo() && inimigosVivos > 0) {
        cout << "\n--- INÍCIO DO TURNO ---\n";
        cout << "Sua vida: " << jogador.getVida() << "\n";
        cout << "Trolls vivos: " << inimigosVivos << "\n";

        for (size_t i = 0; i < trolls.size(); i++) {
            if (trolls[i].estaVivo()) {
                cout << i + 1 << ". " << trolls[i].getNome() << " (Vida: " << trolls[i].getVida() << ")\n";
            }
        }

        cout << "\n1. Atacar\n";
        if (jogador.getSanidade() >= 3) {
            cout << "2. Usar Escudo Mágico (3 rodadas de proteção)\n";
        }
        cout << "Opção: ";
        cin >> op;

        if (op == 1) {
            int alvo;
            cout << "Escolha o troll para atacar (1-3): ";
            cin >> alvo;

            if (alvo >= 1 && alvo <= 3 && trolls[alvo - 1].estaVivo()) {
                int danoCausado = jogador.getAstucia() * 2;
                trolls[alvo - 1].receberDano(danoCausado);
                cout << "Você dispara uma bola de fogo de seu cajado e causa " << danoCausado << " de dano em " << trolls[alvo - 1].getNome() << "!\n";

                if (!trolls[alvo - 1].estaVivo()) {
                    cout << trolls[alvo - 1].getNome() << " foi derrotado!\n";
                    inimigosVivos--;
                }
            } else {
                cout << "[Troll inválido.]\n";
            }
        } else if (op == 2 && jogador.getSanidade() >= 3 && escudoRodadas == 0) {
            escudoRodadas = 3;
            cout << "Você conjura um escudo mágico! Dano será reduzido pela metade por 3 turnos.\n";
        } else {
            cout << "[Opção inválida.]\n";
            if (jogador.getSanidade() >= 3 && escudoRodadas > 0) {
                cout << "Você ainda tem " << escudoRodadas << " turnos restantes com escudo.\n";
            }
        }

        for (auto& troll : trolls) {
            if (troll.estaVivo()) {
                int dano = troll.getAtaque();
                if (escudoRodadas > 0) dano /= 2;

                int num = sorteia(0, 12);
                if (num >= jogador.getResiliencia()) {
                    jogador.receberDano(dano);
                    cout << troll.getNome() << " ataca e causa " << dano << " de dano.\n";
                } else {
                    cout << troll.getNome() << " ataca e erra o golpe!\n";
                }
            }
        }

        if (escudoRodadas > 0) escudoRodadas--;

        cout << "[Pressione Enter para terminar a rodada.]";
        pausar();
    }

    if (!jogador.estaVivo()) {
        morte++;
        cout << "[Você morreu.]\n";
        return processarMorte();
    } else {
        cout << "\nVocê venceu os trolls e liberou o caminho!\n\n";
        c1completo = 1;
        checkpoint1 = 0;
        return true;
    }
}

bool Capitulo1::processarMorte() {
    int op;
    cout << "\n[Deseja voltar para o último checkpoint?]\n1. Sim\n2. Não\nOpção: ";
    cin >> op;

    if (op == 1) {
        checkpoint1++;
        jogador.restaurarVida();
        return false;
    } else {
        checkpoint1 = 0;
        return false;
    }
}

void Capitulo1::iniciar() {
    int op;

    cout << "************************************\nTHE HOLLOW MAGE\n************************************\n\nEscolha a opção:\n1. Iniciar jogo\n2. Sair\nOpção: ";
    cin >> op;
    cin.ignore(1000, '\n');

    if (op == 1) {
        jogador.criarPersonagem();

        cout << "De repente, algo acende à sua frente e você enfim consegue enxergar algo em meio aquele breu: era um tipo de cajado retorcido de madeira com um orbe de cristal no topo, a fonte da luz.\n";
        pausar();
        
        cout << "Você estende sua mão e pega o cabo do cajado, e logo tudo se ilumina ao seu redor, podendo agora ver que estava no interior do que parecia ser uma caverna, com dois túneis à sua frente. Uma bifurcação, que conveniente...\n";
        pausar();
        
        cout << "Você se levanta, com auxílio do cajado, e olha para suas roupas: estava vestido com uma túnica azul bem velha e puída, tal como um mago. Será que aquele cajado pertencia à você? O que deve ter acontecido para tu acabar neste lugar? Nada vem a sua mente.\n";
        pausar();

        do {
            cout << "\nO caminho a seguir se dividia em uma bifurcação, um túnel na esquerda e outro na direita, para qual você quer ir?\n1. Esquerda\n2. Direita\nOpção: ";
            cin >> op;
            cin.ignore(1000, '\n');

            if (op == 1) {
                if (desafioEnigma()) {
                    c1completo = 1;
                    checkpoint1 = 0;
                }
            } else if (op == 2) {
                desafioCombate();
            }
        } while (checkpoint1 > 0);

        if (c1completo > 0) {
            cout << "[Quantidade de mortes: " << morte << "]\n";
            cout << "[Parabéns por ter chegado ao final do primeiro capítulo de The Hollow Mage, " << jogador.getNome() << "! Esse foi o meu projeto pessoal e espero que tenha gostado.]\n";
        } else {
            cout << "Quantidade de mortes: " << morte << "\n";
            cout << "[Obrigado por ter jogado The Hollow Mage, " << jogador.getNome() << "! Esse foi o meu projeto pessoal e espero que tenha gostado.]\n";
        }
    }
}