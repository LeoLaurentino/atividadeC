/******************************************************************************
171. Fazer um programa para receber dois números do usuário, chamar a função e
mostrarse os números são iguais. Além disso, mostrar sua soma e seu produto.
*******************************************************************************/

#include <stdio.h>

    //declaração da função
int ver(int vl1, int vl2, int *soma, int *produto) {
    int resultado = (int) vl1 * vl2;
    
    if (vl1 == vl2) {            //se os valores forem iguais será retornado 1
        return 1;
    }
    else if (resultado > 2147483647 || resultado < -2147483647) {   //limites máximo e mínimo de uma variavel 'int'.
        return -1;              //se o valor estourar o limite do 'int' retornará -1.
    }
    else {                      //caso os valores sejam diferentes
        *soma = vl1 + vl2;
        *produto = resultado;
        return 0;
    }
}

int main() {
    int vl1, vl2, soma, produto, resultado;

    //digitar o primeiro e depois o segundo numero
    printf("Digite o primeiro número: ");
    scanf("%d", &vl1);

    printf("Digite o segundo número: ");
    scanf("%d", &vl2);
    
    //chamando a função 'ver' declarado antes do main()
    resultado = ver(vl1, vl2, &soma, &produto);

    if (resultado == 1) {
        printf("Os números são iguais\n");
    }
    else if (resultado == -1) {
        printf("A soma ou o produto estourou a faixa dos inteiros\n");
    }
    else {
        printf("Os números são diferentes\n");
        printf("A soma é %d\n", soma);
        printf("O produto é %d\n", produto);
    }

    return 0;
}

