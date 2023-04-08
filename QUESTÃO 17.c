/******************************************************************************
17. O número 3025 possui a seguinte característica: 30 + 25 = 55 -> 55*55 = 3025.
Fazer um programa para obter todos os números de 4 algarismos com a mesma
característica do número 3025.
*******************************************************************************/

#include <stdio.h>

int main()
{
      int numero=1000;
      while(numero <= 9999)
      {
                if(numero == (((numero/100)+(numero%100))*((numero/100)+(numero%100))))
                       printf("%d: %d+%d=%d -> %d^2=%d \n", numero, numero/100,numero%100,(numero/100)+(numero%100),(numero/100)+(numero%100),numero);
                numero=numero+1;
      }
}