/* A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre
salário, sexo, idade e número de filhos.
Crie uma struct capaz de armazenar os dados de um habitante e defina um array para armazenar
5 habitantes.
O programa deve ler os dados de cada habitante, calcular e mostrar:
- a média de salários da população;
- o número médio de filhos;
- o maior salário e o menor salário;
- o percentual de mulheres com salário superior a R$2.000,00. */

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <ctype.h>
#define QTD 3

typedef struct
{
    char sexo;
    int idade;
    int filhos;
    float sal;
} Habitante;

int main()
{
    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(CP_UTF8);

    Habitante h[QTD];

    int i;
    float soma_sal = 0;
    float nro_filhos = 0;
    float maior, menor;
    float total_mulheres = 0, mulheres_salAcima2k = 0;

    for (i = 0; i < QTD; i++)
    {
        printf("\n--- Habitante %d ----\n", i + 1);
        printf("\nInforme seu salário: ");
        scanf("%f", &h[i].sal);
        soma_sal += h[i].sal;

        if (i == 0)
        {
            maior = h[i].sal;
            menor = h[i].sal;
        }

        if (h[i].sal > maior)
            maior = h[i].sal;
        if (h[i].sal < menor)
            menor = h[i].sal;

        printf("\nInforme sua idade: ");
        scanf("%d", &h[i].idade);

        printf("\nInforme a quantidade de filhos: ");
        scanf("%d", &h[i].filhos);
        nro_filhos += h[i].filhos;

        printf("\nInforme seu sexo: ");
        scanf(" %c", &h[i].sexo);

        if (tolower(h[i].sexo) == 'f')

            total_mulheres++;

        if (h[i].sal > 2000 && tolower(h[i].sexo) == 'f')
            mulheres_salAcima2k++;
    }

    float media_sal_pop = soma_sal / QTD;
    printf("Média salarial da população: %.2f\n", media_sal_pop);

    int media_filhos = nro_filhos / QTD;
    printf("Número médio de filhos: %d\n", media_filhos);

    printf("\nMaior salário = %.2f e Menor Salário =  %.2f\n", maior, menor);

    float percentual_mul = 0;

    if (total_mulheres > 0)
    {
        percentual_mul = (mulheres_salAcima2k / 100) * total_mulheres;
        printf("\nPorcentagem de mulheres que ganham acima de 2k = %.2f\n", percentual_mul);
    }
    else
        printf("\nNão foram registradas mulheres na pesquisa!\n");

    return 0;
}