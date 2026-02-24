/* Faça um programa em C que leia uma temperatura em Fahrenheit e a
converta para Celsius. */

#include <stdio.h>

int main()
{
    float c,f;
    printf("Digite a temp em F: \n");
    scanf("%f", &f);

    c = (f-32) * 5/9;
    printf("Temperatura em celsius = %.2f\n", c);
}