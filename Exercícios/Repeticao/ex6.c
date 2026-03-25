/* 6. Escreva um programa em linguagem C que simule um caixa eletrônico. O programa
recebe como entrada um valor inteiro positivo, representando o valor total que o usuário
deseja sacar. Em seguida, ele deve calcular e exibir a quantidade de cada nota necessária
para compor esse valor.
Regras da operação
Garanta que o valor do saque seja inteiro e positivo;
As notas disponíveis são: 100, 50, 20, 10, 5 e 2;
O programa informa quantas notas de cada tipo serão entregues;
Caso não seja possível sacar o valor exato, o programa informa o problema. */

#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{
    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(CP_UTF8);

    int valor, n_100 = 0, n_50 = 0, n_20 = 0, n_10 = 0, n_5 = 0, n_2 = 0, resto = 0;

    printf("CAIXA ELETÔNICO\n");

    printf("Digite quanto deseja sacar: \n");
    scanf("%d", &valor);

    if (valor >= 0 && valor == (int)valor)
    {
        n_100 = valor / 100;
        resto = valor - (n_100 * 100);
        n_50 = resto / 50;
        resto = resto - (n_50 * 50);
        n_20 = resto / 20;
        resto = resto - (n_20 * 20);
        n_10 = resto / 10;
        resto = resto - (n_10 * 10);
        n_5 = resto / 5;
        resto = resto - (n_5 * 5);
        n_2 = resto / 2;
        resto = resto - (n_2 * 2);
    }
    else
    {
        printf("O valor deve ser positivo e inteiro\n");
    }

    printf("Sacou %d notas de 2\n", n_2);
    printf("Sacou %d notas de 5\n", n_5);
    printf("Sacou %d notas de 10\n", n_10);
    printf("Sacou %d notas de 20\n", n_20);
    printf("Sacou %d notas de 50\n", n_50);
    printf("Sacou %d notas de 100\n", n_100);

    if(resto > 0)
    {
        printf("Por falta de notas ou moedas, faltou para completar o valor = R$%d\n", resto);
    }
    return 0;
}