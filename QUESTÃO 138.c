/******************************************************************************
Faça um programa para determinar a próxima jogada em um Jogo da Velha. Assumir
que o tabuleiro é representado por uma matriz de 3x3, onde cada posição
representa uma das casas do tabuleiro. A matriz pode conter os seguintes
valores: -1, 0, 1 representando respectivamente uma casa contendo uma peça minha
(-1), uma casa vazia do tabuleiro (0), e uma casa contendo uma peça do meu
oponente (1).
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tabuleiro[3][3] = {{-1, 0, 1}, {1, -1, 0}, {0, 1, -1}};

    int jogador = -1;

    int linha = -1, coluna = -1;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            // Para verificar se a posição está vazia
            if (tabuleiro[i][j] == 0) {
                // Para verificar se a jogada forma uma linha, coluna ou diagonal com duas peças do jogador
                if ((tabuleiro[i][(j+1)%3] == jogador && tabuleiro[i][(j+2)%3] == jogador) ||
                    (tabuleiro[(i+1)%3][j] == jogador && tabuleiro[(i+2)%3][j] == jogador) ||
                    (i == j && tabuleiro[(i+1)%3][(j+1)%3] == jogador && tabuleiro[(i+2)%3][(j+2)%3] == jogador) ||
                    (i == 2-j && tabuleiro[(i+1)%3][(j+2)%3] == jogador && tabuleiro[(i+2)%3][(j+1)%3] == jogador)) {
                    linha = i;
                    coluna = j;
                }
            }
        }
    }

    if (linha == -1 && coluna == -1) {
        srand(time(NULL));
        do {
            linha = rand() % 3;
            coluna = rand() % 3;
        } while (tabuleiro[linha][coluna] != 0);
    }

    // Imprime a próxima jogada
    printf("Jogada: (%d, %d)\n", linha, coluna);

    return 0;
}
