/******************************************************************************
160. Escreva um programa que declare um array de inteiros e um ponteiro para
inteiros. Associe o ponteiro ao array. Agora, some mais um (+1) a cada posição
do array usando o ponteiro (use *).
*******************************************************************************/


#include <stdio.h>
#define TAM 7 

int main() {
    int ay[TAM] = {20, 31, 41, 51, 61, 71, 81}; // criação do array e declaração dos valores
    int *p; // criando o ponteiro que será utilizado nos num. inteiros declarados
    int s; // criando contador
    
    p = ay; // para interligar ponteiro e array
    
    // para realizar a soma de +1 nas posições do array, atraves de ponteiro
    for (s = 0; s < TAM; s++) {
        *(p+s) += 1;
    }
    
    // para exibição dos valore do array modificados
    for (int s = 0; s < TAM; s++) {
        printf("%d ", ay[s]);
    }
    printf("\n");
    
    return 0;
}
