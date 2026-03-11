/* 2. Faça um programa que leia uma string, conte e mostre a quantidade de vogais que ela
contém. */

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <ctype.h>
#define TAM 100

int main()
{
    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(CP_UTF8);

    char str[TAM];

    printf("Digite uma palavra: \n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int i;
    int vogais = 0;
    for(i=0;str[i] != '\0'; i++)
    {
        char c = tolower(str[i]);
        if(c == 'a' || c == 'e' || c == 'i'|| c == 'o'|| c=='u')
            vogais++;
    }

    printf("Quantidade de vogais = %d\n", vogais);


    return 0;
}