/* Faça um programa para ler uma palavra e verificar se ela é um palíndromo. Um palavra é um
palíndromo se ela se mantiver igual quando lida da esquerda para direita e da direita para
esquerda. Ex: arara, ovo, mirim, saias, radar... */

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(CP_UTF8);

    char palavra[50];

    printf("Digite uma palavra e verifique se é palíndromo: \n");
    fgets(palavra, sizeof(palavra), stdin);
    palavra[strcspn(palavra, "\n")] = '\0';

    int i;
    char palavra_invertida[50];
    int tam = strlen(palavra);
    int j = 0;

    for (i = 0; palavra[i] != '\0'; i++)
    {
        palavra[i] = tolower(palavra[i]);
    }
    
    for (i = tam - 1; i >= 0; i--)
    {
        palavra_invertida[j] = palavra[i];
        j++;
    }
    palavra_invertida[j] = '\0';

    // printf("Palavra invertida = %s", palavra_invertida);

    if (strcmp(palavra, palavra_invertida) == 0)
        printf("É um palíndromo!");
    else
        printf("Não é um palíndromo!");

    return 0;
}