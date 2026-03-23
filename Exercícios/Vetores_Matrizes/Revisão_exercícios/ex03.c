/* 3. Faça um programa que leia uma matriz quadradada 3 x 3 de números inteiros. Em seguida, o
programa deve mostrar os elementos acima da diagonal principal (inclusive) */

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#define TAM 3

int main()
{
    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(CP_UTF8);

    int mat[TAM][TAM];
    int i, j;

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            printf("Digite um valor = ");
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            printf("%2d  ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\nDiagonal Principal e acima: \n");
    for (i = 0; i < TAM; i++)
    {

        for (j = 0; j < TAM; j++)
        {
            if (j >= i) // condição para estar acima da diagonal principal
                printf("%d ", mat[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}