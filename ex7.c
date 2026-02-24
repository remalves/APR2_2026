/* Faça um programa em C que leia um número inteiro representando uma
quantidade de minutos. Em seguida, converta esse valor para horas e exiba o
resultado na tela. */

#include <stdio.h>

int main()
{
    int min;
    float horas;

    printf("Digite a quantidade de minutos:  \n");
    scanf("%d", &min);

    horas = min/60.0;

    printf("Quantidade horas = %.2f", horas);
}