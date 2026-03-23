/* Faça um programa que leia a matriz M (2X2) de números inteiros, calcule e mostre a matriz
R (2X2), resultante da multiplicação dos elementos de M pelo seu maior elemento. */

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#define TAM 2

int main()
{
    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(CP_UTF8);
    int mat_M[TAM][TAM];
    int mat_R[TAM][TAM];
    int i, j;

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            printf("\nDigite um valor: ");
            scanf("%d", &mat_M[i][j]);
        }
    }

    int maior = 0;
    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            if (mat_M[i][j] >= maior)
                maior = mat_M[i][j];
        }
    }

    printf("Maior = %d", maior);

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            mat_R[i][j] = mat_M[i][j] * maior;
        }
    }
    printf("\nMatriz M\n");
    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            printf("%2d ", mat_M[i][j]);
        }
        printf("\n");
    }
    printf("\nMatriz R\n");
    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            printf("%2d ", mat_R[i][j]);
        }
        printf("\n");
    }

    return 0;
}