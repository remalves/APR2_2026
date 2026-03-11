/* 1. Faça um programa para ler uma string, contar e mostrar a quantidade de caracteres presentes.
NÃO use strlen().  */

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(CP_UTF8);

    char str[100];

    printf("Digite uma palavra:\n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int cont = 0;
    for(int i = 0; str[i]!= '\0'; i++)
    {
            cont++;
    }



    printf("Quantidade de caracteres = %d\n", cont);



    

    return 0;
}