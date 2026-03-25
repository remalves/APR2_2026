#include <stdio.h>
#include <locale.h>
#include <windows.h>
#define TAM 5

void lerMatriz(int m[][TAM], int lin, int col)
{
    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("\nDigite um numero: ");
            scanf("%d", &m[i][j]);
        }
    }
}

void mostrarMatriz(int m[][TAM], int lin, int col)
{
    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d", m[i][j]);
        }
        printf("\n");
    }
}

void multiplicarMatriz(int m[][TAM], int lin, int col, int n)
{
    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            
            m[i][j]*=n; 
        }
    }
}

int main()
{
    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(CP_UTF8);

    int lin = 5;
    int col = 5;

    int mat[TAM][TAM];

    lerMatriz(mat, lin, col);
    mostrarMatriz(mat, lin, col);

    int num;

    printf("\nNumero pra multiplicar a matriz: ");
    scanf("%d", &num);

    multiplicarMatriz(mat, lin, col, num);
    printf("\nMatriz Atualizada:\n");
    mostrarMatriz(mat, lin, col);
    return 0;
}