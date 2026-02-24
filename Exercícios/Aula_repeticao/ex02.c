/* Faça um programa para ler duas datas, cada qual composta por 3 números inteiros
representando o dia, o mês e o ano. Em seguida, o programa deverá determinar qual data é
cronologicamente maior. */

#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{
    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(CP_UTF8);
    int d1,m1,a1,d2,m2,a2;

    printf("Informe duas datas, a seguir:\n");
    printf("Data 1: \n");
    printf("Dia: \n");
    scanf("%d", &d1);
    printf("Mês: \n");
    scanf("%d", &m1);
    printf("Ano \n");
    scanf("%d", &a1);

    printf("Data 2: \n");
    printf("Dia: \n");
    scanf("%d", &d2);
    printf("Mês: \n");
    scanf("%d", &m2);
    printf("Ano \n");
    scanf("%d", &a2);

    if(a1 > a2)
    {
        printf("A data cronologicamente maior é a data: %.2d/%.2d/%d",d1,m1,a1);
    }
    else if(a1 == a2)
    {
        if(m1 > m2)
        {
            printf("A data cronologicamente maior é a data: %.2d/%.2d/%d",d1,m1,a1);
        }
        else if(m1 == m2)
        {
            if(d1>d2)
            {
                printf("A data cronologicamente maior é a data: %.2d/%.2d/%d",d1,m1,a1);
            }
            else if(d1 == d2)
            {
                printf("As datas são iguais.\n");
            }
            else
            {
                printf("A data cronologicamente maior é a data: %.2d/%.2d/%d",d2,m2,a2);
            }
        }
        else
        {
            printf("A data cronologicamente maior é a data: %.2d/%.2d/%d",d2,m2,a2);
        }
    }
    else
    {
        printf("A data cronologicamente maior é a data: %.2d/%.2d/%d",d2,m2,a2);
    }
        
    return 0;
}