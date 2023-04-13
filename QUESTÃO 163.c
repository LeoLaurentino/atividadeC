/******************************************************************************
163.Escreva uma função que receba um array de inteiros V e os endereços de duas
variáveis ́ inteiras, min e max, e armazene nessas variáveis o valor mínimo e
máximo do array. Escreva também uma função main que use essa função.
*******************************************************************************/

#include <stdio.h>
//Declarando a função que receberá o array de inteiros.
void mininmoemaximo(int V[], int tamanho, int* pon_min, int* pon_max) {
    int min = V[0];
    int max = V[0];

    for (int s = 1; s < tamanho; s++) {
        // Para verificar se o elemento atual é menor que o valor mínimo atual
        if (V[s] < min) { 
            // Sendo menor, o valor mínimo sofrerá atualização.
            min = V[s];
        }
        if (V[s] > max) {
            max = V[s];
        }
    }

    *pon_min = min;
    *pon_max = max;
}

int main() {
    int V[] = {-10, 1, 4, 1, 5, 9, 55, 6, 5, 3, 5};
    int tamanho = sizeof(V) / sizeof(V[0]);
    int min, max;

    mininmoemaximo(V, tamanho, &min, &max);

    printf("Os valores, mínimo e máximo são: %d, %d\n", min, max);

    return 0;
}
