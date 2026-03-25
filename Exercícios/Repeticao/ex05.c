/* 5. Um motorista de aplicativo estipula o preço de suas viagens de acordo com a quantidade
de km percorridos.
Para viagens de até X km, é cobrado um valor R$ V1 por km. Acima de X km, é cobrado o
valor R$ V2.
Faça um programa que leia X, V1, V2 e a quantidade de km percorridos (P) e imprima o
valor total com duas casas decimais.
 */

#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{
    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(CP_UTF8);

    float x, v1, v2, p, vTotal;

    printf("Digite o valor de X:\n");
    scanf("%f", &x);
    printf("Digite o valor de V1:\n");
    scanf("%f", &v1);
    printf("Digite o valor de V2:\n");
    scanf("%f", &v2);
    printf("Digite o valor de km percorridos:\n");
    scanf("%f", &p);

    if(p > x)
    {
        vTotal = p * v2;
    }
    else
    {
        vTotal = p * v1;
    }

    printf("Valor total = %.2f\n", vTotal);

    return 0;
}