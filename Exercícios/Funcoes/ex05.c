/* Faça uma função que receba um número inteiro, calcule e retorne o seu fatorial. */

#include <stdio.h>
#include <locale.h>
#include <windows.h>

int fatorial(int num)
{
    int fat=1; 
    for(int i=num; i>0; i--)
    {
        fat*=i; 
    }
    return fat;
}

int main()
{
    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(CP_UTF8);

    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    int fat = fatorial(n);
    printf("\nFatorial do numero %d = %d\n",n,fat);
    

    return 0;
}