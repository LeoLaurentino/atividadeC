/******************************************************************************
50. Implementar a função cujo cabeçalho é apresentado a seguir:
unsigned char calculaParidade (unsigned char b);
Interferências, ruídos e outros fenômenos que prejudicam a integridade dos dados
são problemas fundamentais quando computadores se comunicam em rede. Para
detectar alterações em bits, os dados são sempre enviados com...
*******************************************************************************/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
unsigned char calculaParidade(unsigned char b) {
    
    unsigned char paridade = 0;
    for (int p = 0; p < 8; p++) {
        if ((b >> p) & 1) { // verifica se o bit atual é 1
            paridade ^= 1; // inverte a paridade atual
        }
    }
    return paridade;
}

}