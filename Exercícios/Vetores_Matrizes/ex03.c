/* Faça um programa que leia uma matriz quadradada 3 x 3 de números inteiros. Em seguida, o
programa deve mostrar os elementos acima da diagonal principal (inclusive). */

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#define LIN 3
#define COL 3

int main()
{
    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(CP_UTF8);

    int mat[LIN][COL], i, j;

    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("\nDigite um nº:\n");
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nMatriz Completa:\n");
    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("\n\nDiagonal e acima: \n");
    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            if (i == 0)
                printf("%d ", mat[i][j]);
            else if (i == 1 && j >= 1)
                printf("%d ", mat[i][j]);
            else if (i == 2 && j == 2)
                printf("%d ", mat[i][j]);
            else
            {
                if ((i == 1 && j < 1))
                    printf("  ");
                if (i == 2 && j < 2)
                    printf("  ");
            }
        }
        printf("\n");
    }

    /*  printf("\nDiagonal Principal da Matriz:\n");
        for (i = 0; i < LIN; i++)
        {
            for (j = 0; j < COL; j++)
            {
                if (i == j)
                    printf("%d", mat[i][j]);
                else
                    printf("  ");
            }
            printf("\n");
        } */

    return 0;
}