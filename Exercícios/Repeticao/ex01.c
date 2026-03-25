/* Faça um programa que leia um número inteiro no intervalo [1, 12] e, usando switch, exiba o
nome do mês correspondente.  */

#include <stdio.h>

int main()
{
    int n;

    printf("Digite o valor de N (escolha entre 1 a 12): \n");
    scanf("%d", &n);

    switch (n)
    {
        case 1:
            printf("Janeiro\n");
            break;
        case 2:
            printf("Fevereiro\n");
            break;
        case 3:
            printf("Março\n");
            break;       
        case 4:
            printf("Abril\n");
            break;
        case 5:
            printf("Maio\n");
            break;
        case 6:
            printf("Junho\n");
            break;
        case 7:
            printf("Julho\n");
            break;
        case 8:
            printf("Agosto\n");
            break;
        case 9:
            printf("Setembro\n");
            break;
        case 10:
            printf("Outubro\n");
            break;
        case 11:
            printf("Novembro\n");
            break;
        case 12:
            printf("Dezembro\n");
            break;
        default:
            printf("Valor fora do intervalo ... \n");
            break;
    }

    return 0;
}

