# The Hollow Mage 🧙‍♂️

**The Hollow Mage** é um jogo RPG textual desenvolvido em C++ com foco em narrativa interativa, exploração e tomadas de decisão.

## 📌 Sobre o Projeto

O projeto nasceu originalmente como um trabalho acadêmico para a disciplina de **Algoritmo Estruturado** do **CEFET/RJ (Unidade Maria da Graça)**, desenvolvido no software **Portugol Studio** usando a pseudolinguagem **Portugol**. O objetivo inicial era demonstrar a aplicação prática de conceitos fundamentais da programação estruturada, tais como:

- Estruturas condicionais (`se/senao`, `escolha-caso`)
- Estruturas de repetição (`enquanto`, `faca-enquanto`)
- Estruturas homogêneas (Vetores e Matrizes)
- Modularização com funções

Com a evolução dos estudos e para a publicação no GitHub, o projeto foi adaptado para **C++**, adocando conceitos da **Programação Orientada a Objetos (POO)** e a divisão modular entre arquivos de cabeçalho (`.hpp`) e implementação (`.cpp`).

---

## 🛠️ Tecnologias Utilizadas

- **Linguagem:** C++17
- **Compilador Recomendado:** GCC / Clang / MSVC
- **Sistema de Build:** CMake

---

## 📂 Estrutura de Arquivos

```text
TheHollowMage/
├── include/       # Arquivos de cabeçalho (.hpp)
├── src/           # Código-fonte (.cpp)
├── CMakeLists.txt # Configuração de compilação
├── .gitignore     # Regras para exclusão no Git
└── README.md      # Documentação do projeto
```

---

## 🚀 Como Compilar e Executar

### Pré-requisitos
- Compilador C++ com suporte a C++11 (`g++`, `clang++` ou `MSVC`)
- `CMake` (v3.10 ou superior)

### Via CMake (Recomendado)

**No Linux / macOS:**
```bash
mkdir build
cd build
cmake ..
cmake --build .
./TheHollowMage
```

**No Windows:**
- Se estiver usando MinGW (GCC / g++):
```powershell
mkdir build
cd build
cmake -G "MinGW Makefiles" ..
cmake --build .
.\TheHollowMage.exe
```
- Se estiver usando Visual Studio (MSVC):
```powershell
mkdir build
cd build
cmake ..
cmake --build .
.\Debug\TheHollowMage.exe
```

### Via Terminal Direto (g++)
```bash
g++ -I include src/*.cpp -o TheHollowMage
./TheHollowMage
```

---

## 🎮 Como Jogar

1. Responda às perguntas iniciais para moldar os atributos e estatísticas do seu personagem.
2. Navegue pelos túneis da caverna escolhendo os caminhos sugeridos.
3. Decifre enigmas usando palavras arcanas ou enfrente inimigos em combates por turnos.

--- 

## 🗺️ Roadmap (Próximos Passos)

O projeto continua em evolução! As próximas atualizações planejadas incluem:

- [x] Lógica base de criação de personagem, enigmas e combate por turnos
- [x] Transição de Portugol para C++ com Orientação a Objetos (POO)
- [x] Modularização em pastas (`include/` e `src/`) e configuração com CMake
- [ ] Implementação de Estruturas de Dados clássicas:
  - **Fila (Queue):** Gerenciamento da ordem de iniciativa de turnos dos inimigos.
  - **Pilha (Stack):** Histórico de ações de combate para mecânicas de *undo* / estado de feitiços.
  - **Métodos de Ordenação (QuickSort / MergeSort):** Ordenação dinâmica de inimigos com base em atributos (como velocidade ou vida restante).
- [ ] Expansão da Narrativa:
  - **Capítulo 2:** Aprofundamento no mistério das runas e na origem do cajado.
  - **Capítulo 3:** O confronto final nas profundezas da caverna e novos desfechos.
- [ ] Refatoração do código-fonte para Inglês (*Clean Code* & nomenclatura padrão)
- [ ] Adição de novos tipos de inimigos, habilidades mágicas e chefões (*Bosses*)
- [ ] Sistema de save e load de progresso via arquivos locais
- [ ] Interface visual no terminal reforçada com códigos ANSI (cores) e ASCII Art
- [ ] Suporte a múltiplos idiomas (PT-BR / EN)