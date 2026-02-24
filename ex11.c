/* Em uma determinada cidade, o valor do quilowatt de energia é um quinto do salário
mínimo. Faça um programa que leia o valor do salário mínimo e a quantidade de
quilowatts consumida por uma residência.
Calcule e mostre:
- o valor do quilowatt;
- o valor a ser pago por essa residência. */

#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "pt-BR");

    float sal_min, qwtt, valor_qwtt, valor_pago;

    printf("Digite o valor do salário mínimo: \n");
    scanf("%f", &sal_min);

    printf("Digite a quantidade de quilowatts consumido: \n");
    scanf("%f", &qwtt);

    valor_qwtt = (1 * sal_min) / 5.0;
    valor_pago = qwtt * valor_qwtt; 

    printf("Valor do quilowatt = %.2f\n", valor_qwtt);
    printf("Valor a ser pago = %.2f\n", valor_pago);

    return 0;

}