/******************************************************************************
6. Fazer um programa que recebe 3 valores não inteiros do usuário e mostra o maior
deles, o menor deles e o valor intermediário.
*******************************************************************************/

#include <stdio.h>

int main() {   
    float v1, v2, v3, menor, maior, media;
    
    printf("Digite tres valores: \n");
    scanf("%f %f %f", &v1, &v2, &v3);
    
    // saber se é menor
    if (v1 < v2){
        if (v1 < v3)
            menor = v1;
        else
            menor = v1;
    }
    else{
        if(v2 < v3)
            menor = v2;
        else
            menor = v3;
            
    }
    
    // saber se é maior
    if(v1 > v2){
        if (v1 > v3)
            maior = v1;
        else
            maior = v3;
    }
    else{
        if(v2 > v3)
            maior = v2;
        else
            maior = v3;
    }    
    
    printf("Menor: %f\nMaior: %f\n", menor, maior);
    
    media = (v1 + v2 +v3)/3;
    printf("A média é: %f ", media);
}
