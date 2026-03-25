#include <stdio.h>
#include <locale.h>
#include <windows.h>

void alterarValor(int x)
{
    return x = x*2; //altera apenas a cópia local
}




int main()
{
    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(CP_UTF8);
    int num = 10;
    alterarValor(num);
    printf("%d\n", num); // ainda seria 10 sem o return

    

    return 0;
}