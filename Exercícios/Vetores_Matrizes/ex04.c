/* Faça um programa que leia uma matriz 4 x 3 de números inteiros e mostre:
- A quantidade de números pares existentes em cada linha da matriz;
- A média dos números, por coluna. */

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#define LIN 2
#define COL 2

int main()
{
    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(CP_UTF8);

    int mat[LIN][COL], i,j, pares;

    for(i = 0; i<LIN; i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("Nº %d = ", j+1);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Matriz: \n");

    for(i = 0; i<LIN; i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("%2d ",mat[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i<LIN; i++)
    {
        pares = 0;
        for(j=0;j<COL;j++)
        {
            if(mat[i][j] % 2 == 0)
                pares++;
        }

        printf("\nQuantidade de pares da linha %d = %d", i+1, pares);
    }

    

    for(j = 0; j < COL; j++)
    {
        int soma = 0;
        for(i=0;i<LIN;i++)
        {
            soma+=mat[i][j];
        }
        float media = (float)soma/LIN;

        printf("\nMédia da coluna %d = %.2f", j+1,media);

    }

    return 0;
}