/******************************************************************************
116. Faça um programa que preenche uma matriz 4 x 4 com o produto do valor da
linha e da coluna de cada elemento. Em seguida, imprima na tela a matriz.
*******************************************************************************/


#include <stdio.h>

int main() {
    int matriz[4][4];
    int p, x;

    // Preenchimento da matriz, com o produto da linha e da coluna de cada elemento
    for (p = 0; p < 4; p++) {
        for (x = 0; x < 4; x++) {
            matriz[p][x] = p * x;
        }
    }

    // Para imprimir a matriz
    for (p = 0; p < 4; p++) {
        for (x = 0; x < 4; x++) {
            printf("%d ", matriz[p][x]);
        }
        printf("\n");
    }

    return 0;
}






