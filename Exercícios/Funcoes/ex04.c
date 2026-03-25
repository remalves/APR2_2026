/* Implemente uma função que receba uma temperatura em Fahrenheit e retorne o
seu valor correspondente em Celsius, de acordo com a fórmula: */

#include <stdio.h>
#include <locale.h>
#include <windows.h>

float conversaoTemp(float F)
{
    float c;
    return c = (F-32) * 5/9; 

}


int main()
{
    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(CP_UTF8);

    float tempFh = 32;

    float tempCels = conversaoTemp(tempFh);

    printf("Temperatura em F: %.2f\n", tempFh);
    printf("Temperatura em C: %.2f\n", tempCels);

    

    return 0;
}