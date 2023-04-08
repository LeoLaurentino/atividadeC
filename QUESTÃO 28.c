/******************************************************************************
28. Fazer um programa para mostrar a soma de todos os números 4 do dominó.
*******************************************************************************/



#include <stdio.h>

int main() {
    int w, z, soma;

    soma = 0;  // inicializa a soma com zero

    for (w = 0; w <= 6; w++) {
        for (z = w; z <= 6; z++) {
            if (w == 4 || z == 4) {  // verifica se algum dos números é 4
                soma++;  // soma 1 à soma total
            }
        }
    }

    printf("A soma de todos os números 4 do dominó é: %d\n", soma);

    return 0;
}





/******************************************************************************
Foi utilizado dois loops 'for' de forma aninhada para poder percorrer os possíveis
números de 0 a 6, tanto para as duas partes da peça de dominó. Usamos a condicional
'if' dentro dos loops, a fim de verificar se tinha algum número igual a 4, e caso
sim, era adicionado 1 para a variável 'soma'.
*******************************************************************************/
