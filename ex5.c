/* Faça um programa em C que leia o salário de um funcionário e a
porcentagem de reajuste que será aplicada sobre ele. Em seguida, o
programa deverá mostrar o valor do aumento e o valor do novo salário
reajustado.
Formate a saída para 2 casas decimais. */

#include <stdio.h>

int main()
{
    float sal, porc, val_aumento, novo_sal;

    printf("Digite o salario: \n");
    scanf("%f", &sal);
    printf("Digite a porcentagem de reajuste: \n");
    scanf("%f", &porc);
    val_aumento = sal * (porc/100);
    novo_sal = sal + val_aumento;
    printf("Valor do aumento = R$ %.2f e o novo salario =  R$ %.2f", val_aumento, novo_sal);
}