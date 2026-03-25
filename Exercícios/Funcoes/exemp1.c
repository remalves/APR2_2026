#include <stdio.h>
#include <locale.h>
#include <windows.h>

int somar(int a, int b)
{
    int res = a + b;
    return res;
}

int main()
{
    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(CP_UTF8);

    int x = 5, y = 3;
    int soma = somar(x, y);
    printf("Resultado da soma de %d + %d = %d\n", x, y, soma);

    return 0;
}
