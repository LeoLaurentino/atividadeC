/******************************************************************************
149. Crie um programa que contenha um array de inteiros contendo 5 elementos.
Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima
o dobro de cada valor lido.                          
*******************************************************************************/


#include <stdio.h>

int main() {
    int array[5];
    int *vap = array;

    // Leitura Array
    printf("Digite 5 numeros inteiros:\n");
    for (int p = 0; p < 5; p++) {
        scanf("%d", vap);
        vap++;
    }

    // Para imprimir o dobro dos numeros
    printf("\nO dobro dos numeros digitados eh:\n");
    vap = array;
    printf("%d\n%d\n%d\n%d\n%d\n", (*vap)*2, (*(vap+1))*2, (*(vap+2))*2, (*(vap+3))*2, (*(vap+4))*2);

    return 0;
}




/******************************************************************************
inicialmente declaramos o array, como pede a questão. fazendo uso do loop 'for.
Já na impressão como pede a questão usando apenas aritmetica imprimimos os valores
em dobro na tela.
*******************************************************************************/
