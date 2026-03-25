/* 2. Crie a função void dataExtenso(int dia, int mes, int ano)
que recebe 3 números inteiros representando uma data.
A função deverá mostrar a data por extenso no formato:
dia de mês_por_extenso de ano
Exemplo: a chamada dataExtenso(20,3,2026)deverá produzir a saída:
20 de março de 2026 */

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <string.h>

int mesValido() 
{
    int m;

    printf("\nInforme o mês:");
    do{
        scanf("%d", &m);
        if(m>12 || m<1)
            printf("Mês Inválido, digite novamente!");

    } while(m > 12 || m < 1);
    return m;
}


void dataExtenso(int d, int m, int a)
{
    char mes[20];
    
    if (m == 1)
        strcpy(mes, "Janeiro");
    else if (m == 2)
        strcpy(mes, "Fevereiro");
    else if (m == 3)
        strcpy(mes, "Março");
    else if (m == 4)
        strcpy(mes, "Abril");
    else if (m == 5)
        strcpy(mes, "Maio");
    else if (m == 6)
        strcpy(mes, "Junho");
    else if (m == 7)
        strcpy(mes, "Julho");
    else if (m == 8)
        strcpy(mes, "Agosto");
    else if (m == 9)
        strcpy(mes, "Setembro");
    else if (m == 10)
        strcpy(mes, "Outubro");
    else if (m == 11)
        strcpy(mes, "Novembro");
    else
        strcpy(mes, "Dezembro");

    printf("%d de %s de %d\n", d, mes, a);
   
}

int main()
{
    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(CP_UTF8);

    int dia, ano;

    printf("Informe o dia: ");
    scanf("%d", &dia);

    int mes = mesValido();

    printf("Informe o ano: ");
    scanf("%d", &ano);

    dataExtenso(dia, mes, ano);

    return 0;
}