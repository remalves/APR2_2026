/* 2. Faça um programa que leia dois vetores de números inteiros, cada um com 5 posições. Em
seguida, o programa deve exibir os valores que aparecem em ambos os vetores.
 */

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#define TAM 3

int main()
{
    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(CP_UTF8);

    int v1[TAM], v2[TAM];

    int i;
    printf("Vetor 1: ");
    for(i=0; i<TAM; i++)
    {
        printf("\nValor %d = ", i+1);
        scanf("%d", &v1[i]);
    }

    printf("\nVetor 2: ");
    for(i=0; i<TAM; i++)
    {
        printf("\nValor %d = ", i+1);
        scanf("%d", &v2[i]);
    }
    int j;
    for(i=0; i<TAM; i++)
    {
        for(j=0; j<TAM; j++)
        {
            if(v1[i] == v2[j])
                printf("%d |", v1[i]);
        }
    }
    //printei usando j, pois considero em posições diferentes do vetor








    

    return 0;
}