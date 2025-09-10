// Nível Novato - Posicionamento dos Navios
// Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
// Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
// Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.


#include <stdio.h>

int main() {
    // Declarar tabuleiro 5x5
    int tabuleiro[5][5] = {0};

    // ---- Navio Vertical ----
    int colunaVertical = 1; // Coluna onde o navio ficará
    for (int i = 0; i < 3; i++) { // Tamanho do navio = 3
        tabuleiro[i][colunaVertical] = 1;
        printf("Navio Vertical em (%d, %d)\n", i, colunaVertical);
    }

    // ---- Navio Horizontal ----
    int linhaHorizontal = 3; // Linha onde o navio ficará
    for (int j = 0; j < 4; j++) { // Tamanho do navio = 4
        tabuleiro[linhaHorizontal][j] = 1;
        printf("Navio Horizontal em (%d, %d)\n", linhaHorizontal, j);
    }

    return 0;
}

