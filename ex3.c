/* Faça um programa em C para calcular o índice de massa corporal (IMC) de
uma pessoa de acordo com a fórmula abaixo. Mostre o resultado na tela. */

#include <stdio.h>

int main()
{
    float peso,altura, imc;

    printf("Digite o peso: \n");
    scanf("%f", &peso);
    printf("Digite a altura em metros (ex: 1.73): \n");
    scanf("%f", &altura);

    imc = peso/ (altura*altura);
    printf("IMC =  %.2f", imc);


}