/* Escreva um programa em C que receba 3 números inteiros representando as medidas dos
lados de um triângulo. O programa deverá verificar se os números lidos formam um triângulo.
Dado um triângulo com lados a, b e c, esse triângulo somente existirá se:
a + b > c
a + c > b
b + c > a
Se os números lidos formarem um triângulo, o programa deverá mostrar qual seu tipo:
Equilátero (3 lados iguais), Isósceles (2 lados iguais) ou Escaleno (3 lados diferentes) */

#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{
    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(CP_UTF8);
    int a, b, c;
    printf("Digite os lados de um triângulo: \n");
    printf("Lado A:\n");
    scanf("%d", &a);
    printf("Lado B:\n");
    scanf("%d", &b);
    printf("Lado C:\n");
    scanf("%d", &c);

    if (a + b > c || a + c > b || b + c > a)
    {
        printf("É um triângulo ");

        if (a == b && b == c)
            printf("equilátero\n");
        else if ((a == b && b != c) || (b == c && c != a) || (c == a && a != b))
            printf("isósceles\n");
        else
            printf("escaleno\n");
    }

    return 0;
}