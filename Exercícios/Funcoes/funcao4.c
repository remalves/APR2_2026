//Com retorno e com parâmetros
/* 
    Exemplo de uso:
        Operações matemáticas, cálculos, estatísticas, etc
        Validações de dados
        Conversões entre tipos ou unidades
        Qualquer transformação de entrada em saída 
*/

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#define PI 3.14159

int somar(int a, int b)
{
    return a+b;
}

double areaCirculo(double raio)
{
    return PI * raio * raio;
}


int main()
{
    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(CP_UTF8);

    int res = somar(4,5);
    printf("Resultado =  %d\n", res);

    printf("Area do circulo (r=5): %.2f\n", areaCirculo(5));
    

    return 0;
}