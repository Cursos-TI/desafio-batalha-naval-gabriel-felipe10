// Nível Mestre - Habilidades Especiais com Matrizes
// Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
// Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
// Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.


#include <stdio.h>

#define N 10

int main() {
    int tabuleiro[N][N] = {0};

    //  Habilidade Cone (triângulo apontando para baixo)
    int altura = 4;
    int inicioColuna = 3;
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j <= i; j++) {
            tabuleiro[i][inicioColuna + j] = 1;
        }
    }

    //  Habilidade Cruz (linha + coluna cruzadas no centro) 
    int centro = N / 2;
    for (int i = 0; i < N; i++) {
        tabuleiro[centro][i] = 1; // linha horizontal
        tabuleiro[i][centro] = 1; // coluna vertical
    }

    // Habilidade Octaedro (diamante no centro) 
    int raio = 3;
    for (int i = -raio; i <= raio; i++) {
        for (int j = -raio; j <= raio; j++) {
            if (abs(i) + abs(j) <= raio) {
                int linha = centro + i;
                int coluna = centro + j;
                if (linha >= 0 && linha < N && coluna >= 0 && coluna < N) {
                    tabuleiro[linha][coluna] = 1;
                }
            }
        }
    }

    //  Exibir Tabuleiro 
    printf("Tabuleiro com habilidades especiais:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
