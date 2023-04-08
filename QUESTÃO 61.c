/******************************************************************************
61. Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os
valores lidos.
*******************************************************************************/
#include <stdio.h>

int main() {
    int vl1[6], p;

    // Absorve os valores inteiros
    printf("Digite 6 valores inteiros:\n");
    for (p = 0; p < 6; p++) {
        scanf("%d", &vl1[p]);
    }
    
    // Mostrar na tela os valores
    printf("Valores lidos:\n");
    for (p = 0; p < 6; p++) {
        printf("%d ", vl1[p]);
    }
    
    return 0;
}
