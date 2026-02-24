/* Faça um programa que exiba todos os números de 1 a 100 que são divisíveis por 7 e por 3.
 */

#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{
    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(CP_UTF8);

    int i;

    for(i= 1; i<=100;i++)
    {
        if(i % 7 == 0 && i%3 == 0)
            printf("%d\n", i);
    }
    

    return 0;
}