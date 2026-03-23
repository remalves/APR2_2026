/*  Escreva um programa para ler uma matriz (5X4) de números inteiros. Em seguida, execute as
trocas abaixo e mostre como ficou a matriz:
- trocar a linha 1 com a linha 4;
- trocar a coluna 0 com a coluna 3. */

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <time.h>
#define LIN 5
#define COL 4

int main()
{
    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(CP_UTF8);
    srand(time(NULL)); //inicializa a semente
    int mat[LIN][COL];
    int i,j;

    //gerando a matriz
    // to com preguiça
    for(i=0; i<LIN;i++)
    {
        for(j=0;j<COL;j++)
        {
            //mat[i][j] = rand() % 100;
            printf("__:");
            scanf("%d", &mat[i][j]);
        }
    }

    printf("MATRIZ: \n");

    for(i=0; i<LIN;i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("%2d ", mat[i][j]);
        }

        printf("\n");
    }

    int aux;
    //trocando a linha 1 com a linha 4
    for(j=0; j<COL;j++)
    { 
        aux = mat[0][j]; //linha 1 
        mat[0][j] = mat[3][j]; 
        mat[3][j] = aux;
        
    }

    //trocando a coluna 0 com a coluna 3
    for(i=0; i<LIN;i++)
    { 
        aux = mat[i][0]; //coluna 0  
        mat[i][0] = mat[i][3]; 
        mat[i][3] = aux;        
    }


    printf("\n\nNOVA MATRIZ: \n");

    for(i=0; i<LIN;i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("%2d ", mat[i][j]);
        }

        printf("\n");
    }


    return 0;
}