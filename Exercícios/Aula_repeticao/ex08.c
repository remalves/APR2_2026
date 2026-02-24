/* Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3
centímetros por ano. Faça um programa que calcule e imprima quantos anos serão necessários
para que Zé seja maior que Chico. */


#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{
    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(CP_UTF8);

    float alt_chico = 1.50, alt_ze = 1.10;
    int anos = 0;

    while(alt_ze < alt_chico)
    {
        alt_chico+=0.2;
        alt_ze+=0.3;
        anos+=1;
    }

    printf("Quantidade anos = %d\n", anos);

    return 0;
}