/******************************************************************************
94. Faça um programa que leia dois números a e b (positivos menores que 10000)
e:...
*******************************************************************************/



#include <stdio.h>

int main() {
    int vt_a[4], vt_b[4], vt_soma[5];
    int tamanho, a, b;

    // lê os números a e b
    printf("Informe o valor de a: ");
    scanf("%d", &a);
    printf("Informe o valor de b: ");
    scanf("%d", &b);
    
    // faz o preenchimento do vt_b 
    for (int i = 0; i < 4; i++) {
        vt_a[i] = a % 10;
        a /= 10;
    }
    
    // faz o preenchimento do vt_b 
    for (int i = 0; i < 4; i++) {
        vt_b[i] = b % 10;
        b /= 10;
    }
    
    // faz a soma a soma e guarda no vt_soma
    int carry = 0;
    for (int i = 0; i < 4; i++) {
        int s = vt_a[i] + vt_b[i] + carry;
        carry = 0;
        if (s >= 10) {
            s -= 10;
            carry = 1;
        }
        vt_soma[i] = s;
    }
    if (carry) {
        vt_soma[4] = 1;
        tamanho = 5;
    }
    else {
        tamanho = 4;
    }
    
    // para exibir os vetores
    printf("Vetor de a: ");
    for (int i = 3; i >= 0; i--) {
        printf("%d ", vt_a[i]);
    }
    printf("\nVetor de b: ");
    for (int i = 3; i >= 0; i--) {
        printf("%d ", vt_b[i]);
    }
    printf("\nVetor de soma: ");
    for (int i = tamanho - 1; i >= 0; i--) {
        printf("%d ", vt_soma[i]);
    }
    printf("\n");
    
    return 0;
}





/******************************************************************************
Na parte incial do código números a e b foram lidos, preencheu-se os vetores
correspondentes a cada número, armazenando cada algarismo em uma posição do
vetor (a primeira posição é o algarismo menos significativo).
Realiza a soma dos dois vetores, somando posição a posição e levando em conta
o carry, caso a soma seja maior ou igual a 10. O vetor soma é preenchido com
o resultado da soma, seguindo a mesma lógica de armazenamento dos vetores de
a e b.
*******************************************************************************/