/* Faça um programa que leia os salários de 10 funcionários de uma empresa.
Em seguida, o programa deve calcular a média desses salários e reajustá-los da seguinte forma:
- salários acima da média receberão reajuste de 5%
- salários abaixo da média receberão reajuste de 10%
Mostre a média dos salários.
Mostre os valores dos novos salários. */

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#define FUNCIONARIOS 5

int main()
{
    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(CP_UTF8);

    float sal[FUNCIONARIOS], media_sal;
    int i;
    float soma = 0;
    for (i = 0; i < FUNCIONARIOS; i++)
    {
        printf("\nSalário do funcionário %d = ", i + 1);
        scanf("%f", &sal[i]);
        soma += sal[i];
    }
    media_sal = soma / FUNCIONARIOS;
    printf("\nMédia dos salários = %.2f", media_sal);

    for (i = 0; i < FUNCIONARIOS; i++)
    {
        printf("\nSalário sem reajuste: %.2f", sal[i]);

        if (sal[i] > media_sal)
        {
            sal[i] = sal[i] * 1.05;
            printf("\nSalário com reajuste: %.2f", sal[i]);
        }
        else
        {
            sal[i] = sal[i] * 1.10;
            printf("\nSalário com reajuste: %.2f", sal[i]);
        }
    }

    return 0;
}