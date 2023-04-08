
/******************************************************************************
193. Escreva um programa que utilize uma função "replace" que aceita um string como
parâmetro e retorna um inteiro. A função substitui todos os espaços do seu
parâmetro pelo caracter '-', e retorna o número de substituições feitas.
O programa que a usa deverá testar a sua funcionalidade.                    
*******************************************************************************/


#include <stdio.h>
#include <string.h>

// Função criada para substitui os espaços por '' - '' e informar quantidade substit. 
int replace_espacos(char *string) {
    int p;
    int contador = 0; // declaração do contador 

    for (p = 0; p < strlen(string); p++) {
        if (string[p] == ' ') { 
            string[p] = '-'; 
            contador++; 
        }
    }
    return contador; // retorna o número de substituições feitas
}

// Informando a função principal
int main() {
    
    int numero_replacements;
    char string[100]; // define um array de caracteres para armazenar a string
    printf("Digite uma string: "); 
    fgets(string, 100, stdin); // 
    numero_replacements = replace_espacos(string);
    printf("String modificada: %s\n", string); 
    printf("Número de substituições feitas: %d\n", numero_replacements); // exibe o número de substituições feitas
    return 0; 
}
