
/******************************************************************************
QUESTÃO.39 Um passageiro corre à sua velocidade máxima de 8 m/s para pegar um
trem. Quando está à distância d da porta de entrada, o trem principia a rodar
com aceleração constante a = 1 m/(s*s), afastando-se. 
*******************************************************************************/


#include <stdio.h>
#include <math.h>

#define DT 0.1  // Intervalo de tempo em segundos

int main() {
    double d;           // Distância início: passageiro x porta do trem
    double v_p = 8.0;   // Velocidade do passageiro
    double v_t = 0.0;   // Velocidade inicial do trem 
    double a_t = 1.0;   // Aceleração do trem em m/s^2
    double t = 0.0;     // Tempo em segundos
    double x_p = 0.0;   // Posição inicial do passageiro em metros
    double x_t = 0.0;   // Posição inicial do trem em metros
    double x_pc;        // Distância crítica de separação

    printf("Digite a distância inicial entre o passageiro e a porta do trem (em metros): ");
    scanf("%lf", &d);

    x_pc = (v_p*v_p)/(2*a_t);

    while (1) {
        x_p = x_p + v_p*DT;
        v_p = v_p;

        x_t = x_t + v_t*DT + 0.5*a_t*DT*DT;
        v_t = v_t + a_t*DT;

        if (fabs(x_t - x_p - d) < 0.1) {
            printf("O passageiro conseguiu pegar o trem em %.1lf segundos.\n", t);
            printf("Velocidade do trem: %.1lf m/s.\n", v_t);
            printf("Velocidade média do trem até este instante: %.1lf m/s.\n", (x_t - x_p - d)/t);
            printf("Distância crítica de separação: %.1lf metros.\n", x_pc);
            break;
        }

        if (x_p > x_t + d) {
            printf("O passageiro perdeu o trem em %.1lf segundos.\n", t);
            printf("Velocidade do trem: %.1lf m/s.\n", v_t);
            printf("Velocidade média do trem até este instante: %.1lf m/s.\n", (x_t - x_p - d)/t);
            printf("Distância crítica de separação: %.1lf metros.\n", x_pc);
            break;
        }

        // Incrementa o tempo
        t = t + DT;
    }

    return 0;
}
