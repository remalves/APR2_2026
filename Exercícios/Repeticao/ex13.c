/* Faça um programa em C que exiba os N primeiros termos da sequência de
Fibonacci, onde N é um número inteiro informado pelo usuário.  */

#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{
    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(CP_UTF8);
    int a = 0,b = 1,prox_term = 0,i,n;

    printf("Quantidade de termos: \n");
    scanf("%d",&n);

    for(i=0; i<n;i++)
    {
        printf("%d| ", prox_term);
        a = b;
        b = prox_term;
        prox_term = a+b; 
     
    }

    return 0;
}