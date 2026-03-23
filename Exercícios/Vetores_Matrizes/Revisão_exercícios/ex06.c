/* 6. Escreva um programa para ler uma matriz (5X4) de números inteiros. Em seguida, execute as
trocas abaixo e mostre como ficou a matriz:
- trocar a linha 1 com a linha 4;
- trocar a coluna 0 com a coluna 3. */

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#define LIN 5
#define COL 4

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

    printf("\nMatriz antes das trocas: \n");
    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("%2d ", mat[i][j]);
        }
        printf("\n");
    }

    int aux;
    for (j = 0; j < COL; j++)
    {
        aux = mat[4][j];
        mat[4][j] = mat[1][j];
        mat[1][j] = aux;
    }

    for (i = 0; i < LIN; i++)
    {
        aux = mat[i][3];
        mat[i][3] = mat[i][0];
        mat[i][0] = aux;
    }

    printf("\nMatriz depois das trocas: \n");
    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("%2d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}