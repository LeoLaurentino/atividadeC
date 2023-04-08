/******************************************************************************
204. Cebolinha é um personagem de história em quadrinhos que quando fala, troca
o R pelo L. Escreva uma função cebolinhaString, que recebe uma string s e um
buffer (um vetor capaz de armazenar outra string com o mesmo tamanho de s) e
armazene no buffer uma versão de s com todos os R's trocados por L's, exceto
quando o R é a última letra de uma palavra. Dois R's seguidos devem ser
substituídos por um único L. Lembre-se de manter as letras maiúsculas e
minúsculas como no texto original.
*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// função que recebe uma string S e um buffer, e armazena no buffer uma versão de s.
void cebolinhaString(char *s, char *buffer) {
    int i, t = 0;
    int taman = strlen(s);

    for (i = 0; i < taman; i++) {
        // para verificar se o caractere atual em 's' é 'r' (caixa baixa ou alta)
        if (tolower(s[i]) == 'r') {
            if (i == taman - 1 || isspace(s[i+1]) || s[i+1] == '\0') {
                buffer[t++] = s[i]; // mantém o caractere 'r' no buffer
            } else if (tolower(s[i+1]) == 'r') {
                i++;
            } else {
                // substituiçao do caractere 'r' pelo caractere 'L' ou 'l'
                buffer[t++] = (isupper(s[i]) ? 'L' : 'l');
            }
        } else {
            buffer[t++] = s[i];
        }
    }

    buffer[t] = '\0'; // coloca um caractere nulo, indicando o final da string
}

int main() {
    char s[100];
    char buffer[100];

    printf("Digite uma string: ");
    fgets(s, 100, stdin); // ver a string digitada pelo usuário (com no máximo 100 caracteres)

    cebolinhaString(s, buffer); // para modificar a string 's'

    printf("Texto original: %s\n", s); 
    printf("Texto modificado: %s\n", buffer);

    return 0;
}
