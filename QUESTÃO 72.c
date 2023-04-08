/******************************************************************************
72. Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde
se encontram o maior e o menor valor.
*******************************************************************************/



#include <stdio.h>

int main() {
    int valores[5], p, maiorvalor, menorvalor;;

    // Lê os valores do usuário
    printf("Entre com 5 valores:\n");
    for (p = 0; p < 5; p++) {
        scanf("%d", &valores[p]);
    }
    
    // Inicializa as posições do maior e do menor valor
    maiorvalor = menorvalor = 0;
    
    // Encontra as posições do maior e do menor valor
    for (p = 1; p < 5; p++) {
        if (valores[p] > valores[maiorvalor]) {
            maiorvalor = p;
        }
        if (valores[p] < valores[menorvalor]) {
            menorvalor = p;
        }
    }
    
    // Exibe as posições do maior e do menor valor
    printf("Posicao do maior valor: %d\n", maiorvalor);
    printf("Posicao do menor valor: %d\n", menorvalor);
    
    return 0;
}