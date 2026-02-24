/* 4. Faça um programa em C para calcular o índice de massa corporal (IMC) de uma
pessoa de acordo com a fórmula abaixo. Mostre a classificação. */

#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{
    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(CP_UTF8);

    float peso, altura, imc = 0;

    printf("Calculadora de IMC:\n");
    printf("Digite seu peso (em kg): \n");
    scanf("%f", &peso);
    printf("Digite sua altura (em metros): \n");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if (imc <= 18.5)
        printf("Abaixo do peso\n");
    else if (imc >= 18.6 && imc <= 24.9)
        printf("Peso normal\n");
    else if (imc >= 25 && imc <= 29.9)
        printf("Acima do peso\n");
    else if (imc >= 30 && imc <= 34.9)
        printf("Obesidade 1\n");
    else if (imc >= 35 && imc <= 39.9)
        printf("Obesidade 2\n");
    else
        printf("Obesidade 3\n");

    return 0;
}