/******************************************************************************
64.Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele
possui.
*******************************************************************************/

#include <stdio.h>

int main() {
    int v[10];
    int p, contador = 0;
    
    // Lendo os valores do vetor
    for(p = 0; p < 10; p++) {
        printf("Digite o valor da posicao %d: ", p);
        scanf("%d", &v[p]);
        
        // Verificando se o valor é par e incrementando o contador
        if(v[p] % 2 == 0) {
            contador++;
        }
    }
    
    // Escrevendo a quantidade de valores pares
    printf("\nNeste vetor temos %d valores de numeros pares.\n", contador);
    
    return 0;
}
