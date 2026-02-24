/* Faça um programa em C que calcule o montante acumulado (M) em um investimento. O
usuário deverá fornecer como entradas: capital aplicado (C), taxa de juros anual e o tempo
da aplicação (em anos).
Fórmula dos juros compostos: M = C * (1 + taxa_formato_decimal) ^ tempo */

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <math.h>

int main()
{
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "pt-BR");

    int C, tempo; 
    float M, tx_juros_anual;

    printf("Digite o valor do capital aplicado: \n");
    scanf("%d",&C);

    printf("Digite o valor da taxa de juros anual: \n");
    scanf("%f",&tx_juros_anual);
    

    printf("Digite o tempo de aplicação: \n");
    scanf("%d",&tempo);

    M = C * pow((1 + (tx_juros_anual/100)), 10);  

    printf("Valor do montante acumulado após %d =  %.2f", tempo, M);


}