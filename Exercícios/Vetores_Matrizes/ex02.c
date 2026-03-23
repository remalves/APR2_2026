/* Faça um programa que leia dois vetores de números inteiros, cada um com 5 posições. Em
seguida, o programa deve exibir os valores que aparecem em ambos os vetores. */

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#define TAM 3

int main()
{
    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(CP_UTF8);

    int v1[TAM], v2[TAM], i, j, apareceu = 0;
    printf("Preencha o vetor: \n");
    for (i = 0; i < TAM; i++)
    {
        printf("Nº %d = \n", i + 1);
        scanf("%d", &v1[i]);
    }

    printf("\nPreencha o 2º vetor: \n");
    for (j = 0; j < TAM; j++)
    {
        printf("Nº %d = \n", j + 1);
        scanf("%d", &v2[j]);
    }

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            if (v1[i] == v2[j])
            {
                printf("\nAparece nos dois vetores: %d", v1[i]);
                apareceu = 1;
            }
                
        }
    }

    if (!apareceu)
        printf("\nNão houve números em comum!\n");

    return 0;
}