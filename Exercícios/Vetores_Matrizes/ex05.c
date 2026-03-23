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

    int matM[TAM][TAM], matR[TAM][TAM], maior;

    int i, j;

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            printf("Nº %d = \n", j + 1);
            scanf("%d", &matM[i][j]);
        }
    }

    printf("\nMatriz M:\n");
    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            printf("%3d ", matM[i][j]);
        }
        printf("\n");
    }

    // Descobrir o maior elemento
    maior = matM[0][0];
    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            if(matM[i][j] > maior)
                maior = matM[i][j];
        }
        
    }
    //Multiplicando e mostrando a nova matriz
    printf("\nMatriz R: \n");
    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            matM[i][j] = matM[i][j] * maior;
            printf("%3d ", matM[i][j]);
        }
        printf("\n");
    }

    return 0;
}