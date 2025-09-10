// Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
// Sugestão: Expanda o tabuleiro para uma matriz 10x10.
// Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
// Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.


#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

int main() {
    int tabuleiro[LINHAS][COLUNAS] = {0};

    // ---- Navio Vertical ----
    int colunaVertical = 2;
    for (int i = 0; i < 4; i++) {
        tabuleiro[i][colunaVertical] = 3; // navio ocupa valor 3
    }

    // ---- Navio Horizontal ----
    int linhaHorizontal = 5;
    for (int j = 0; j < 5; j++) {
        tabuleiro[linhaHorizontal][j] = 3;
    }

    // ---- Navio Diagonal (principal ↘) ----
    for (int k = 0; k < 4; k++) {
        tabuleiro[k][k] = 3;
    }

    // ---- Navio Diagonal (secundária ↙) ----
    for (int k = 0; k < 4; k++) {
        tabuleiro[k][9 - k] = 3;
    }

    // ---- Exibir Tabuleiro ----
    printf("Tabuleiro 10x10:\n");
    for (int linha = 0; linha < LINHAS; linha++) {
        for (int coluna = 0; coluna < COLUNAS; coluna++) {
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}
