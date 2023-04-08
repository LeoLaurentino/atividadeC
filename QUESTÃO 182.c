/******************************************************************************
182. Fazer um programa em C para:1. receber um nome do usuário na forma de string
(máx. 100 caracteres). 2. mostrar o nome no formato de autor de referência bibliográfica
(último sobrenome no início, depois as iniciais dos demais nomes, eliminando todas as
palavras com dois caracteres ou menos).
*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_CARACTERES 100

int main() {
    char nome[MAX_CARACTERES];
    char sobrenome[MAX_CARACTERES];
    char inicial[2];
    int i, contador, num_nomes;
    int ultespaco, espacos[4];

    printf("Digite o nome completo: ");
    fgets(nome, MAX_CARACTERES, stdin);

    num_nomes = 0;
    ultespaco = -1;
    for (i = 0; i < strlen(nome); i++) {
        if (nome[i] == ' ') {
            if (i - ultespaco - 1 > 2) {
                espacos[num_nomes] = ultespaco + 1;
                num_nomes++;
            }
            ultespaco = i;
        }
    }
    if (strlen(nome) - ultespaco - 1 > 2) {
        espacos[num_nomes] = ultespaco + 1;
        num_nomes++;
    }

    strncpy(sobrenome, nome + espacos[num_nomes - 1], strlen(nome) - espacos[num_nomes - 1] - 1);
    sobrenome[strlen(nome) - espacos[num_nomes - 1] - 1] = '\0';

    sobrenome[0] = toupper(sobrenome[0]); // para conversão do primeiro caractere para caixa alta

    printf("%s, ", sobrenome);

    contador = 0;
    for (i = 0; i < num_nomes - 1; i++) {
        strncpy(inicial, nome + espacos[i], 1);
        inicial[1] = '\0';
        printf("%c. ", toupper(inicial[0])); // para conversão e seguido de (.)

        contador++;
        if (contador == 5) {
            break;
        }
    }
    printf("\n");

    return 0;
}

