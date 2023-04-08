/******************************************************************************
83.Faça um programa que leia dez conjuntos de dois valores, o primeiro representando
o número do aluno e o segundo representando a sua altura em metros. Encontre o
aluno mais baixo e o mais alto. Mostre o número do aluno mais baixo e do mais
alto, juntamente com suas alturas.

*******************************************************************************/




#include <stdio.h>

int main() {
    int numerodo_aluno, alunomaisbaixo, alunomaisalto;
    float altura, altura_mais_baixa = 4.0, altura_mais_alta = 0.0;  // estipulada uma altura máxima de 4 metros

    for (int p = 1; p <= 10; p++) {
        printf("Digite o número e a altura do aluno: ");
        scanf("%d %f", &numerodo_aluno, &altura);

        if (altura < altura_mais_baixa) {  // para fazer a verificacao se a altura que foi informada é a mais alta ou a altura mais baixa
            altura_mais_baixa = altura;
            alunomaisbaixo = numerodo_aluno;
        }

        if (altura > altura_mais_alta) {
            altura_mais_alta = altura;
            alunomaisalto = numerodo_aluno;
        }
    }

    printf("O aluno mais baixo: número %d, altura %.2f m\n", alunomaisbaixo, altura_mais_baixa);
    printf("O aluno mais alto: número %d, altura %.2f m\n", alunomaisalto, altura_mais_alta);

    return 0;
}
