/* 10. Faça um programa que leia um número inteiro e calcule seu fatorial.
Faça duas versões deste programa: uma utilizando while e outra com for */

#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{
    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(CP_UTF8);

    int num;

    printf("Digite um número inteiro:\n");
    scanf("%d", &num);

    int i, fat;

    fat = num;

    /* USANDO WHILE

    i=num-1;
     while(i>0 && i<num)
     {
         fat*=i;
         i--;
     } */

    for (i = 1; i < num; i++)
    {
        fat *= i;
    }

    printf("Fatorial de %d = %d", num, fat);

    return 0;
}