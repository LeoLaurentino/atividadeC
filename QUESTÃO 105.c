/******************************************************************************
105. Faça um programa para receber do usuário a dimensão de um array (máx. 20),
os elementos desse array e efetuar a sua ordenação utilizando o método da bolha
(bubble-sort).
*******************************************************************************/


#include <stdio.h>

int main() {
    int n, temp, i, t;
    int arr[20];

    printf("Informe a dimensao do array (max. 20): ");
    scanf("%d", &n);

    printf("Informe os elementos do array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Ordenar o array fazendo uso do método bubble-sort
    for (i = 0; i < n-1; i++) {
        for (t = 0; t < n-i-1; t++) {
            if (arr[t] > arr[t+1]) {
                // Troca os elementos adjacentes de posição
                temp = arr[t];
                arr[t] = arr[t+1];
                arr[t+1] = temp;
            }
        }
    }

    // Imprimir o array de forma ordenada ordenado
    printf("Array ordenado: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

