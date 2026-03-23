/* 1. Faça um programa que leia os salários de 10 funcionários de uma empresa.
Em seguida, o programa deve calcular a média desses salários e reajustá-los da seguinte forma:
- salários acima da média receberão reajuste de 5%
- salários abaixo da média receberão reajuste de 10%
Mostre a média dos salários.
Mostre os valores dos novos salários. */

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#define TAM 5

int main()
{
    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(CP_UTF8);

    float sal[TAM], media_sal = 0, soma_sal = 0;

    int i;

    for (i = 0; i < TAM; i++)
    {
        printf("Digite o salário %d: \n", i+1);
        scanf("%f", &sal[i]);
        soma_sal += sal[i];
    }

    media_sal = soma_sal / TAM;
    printf("\nMédia dos salários: %.2f", media_sal);


    for (i = 0; i < TAM; i++)
    {
        printf("\nSalário %d antes do reajuste: %.2f",i+1, sal[i]);
        if(sal[i] > media_sal)
            sal[i] = sal[i] * 1.05;
        else
            sal[i] = sal[i] * 1.10;

        printf("\nSalário %d depois do reajuste: %.2f",i+1, sal[i]);
        printf("\n");
    }

    return 0;
}