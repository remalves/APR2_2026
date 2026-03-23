/* Faça um programa que leia uma matriz 4 x 3 de números inteiros e mostre:
- A quantidade de números pares existentes em cada linha da matriz;
- A média dos números, por coluna. */

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#define LIN 2
#define COL 3

int main()
{
    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(CP_UTF8);

    int mat[LIN][COL];

    int i, j;

    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("\nDigite um valor: ");
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("%2d ", mat[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < LIN; i++)
    {
        int pares = 0;
        for (j = 0; j < COL; j++)
        {
            if (mat[i][j] % 2 == 0)
                pares++;
        }

        printf("\nQuantidade de pares da linha %d = %d", i + 1, pares);
    }

    printf("\nA média dos números, por coluna");
    for (j = 0; j < COL; j++)
    {
        float soma = 0;
        for (i = 0; i < LIN; i++)
        {
            soma += mat[i][j];
        }
        printf("\nMédia da coluna %d = %.2f", j + 1, soma/LIN);
    }

    return 0;
}