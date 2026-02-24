/* Faça um programa que leia números referentes às temperaturas diárias de uma
cidade durante uma semana. Na sequência, mostre:
- a média das temperaturas
- a temperatura mais alta
- a temperatura mais baixa */

#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{
    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(CP_UTF8);

    float temp,soma, media, maior, menor, i;
  

    for(i=1;i<=4;i++)
    {
        printf("Digite a temperatura do dia %.f:\n", i);
        scanf("%f", &temp);
        soma+=temp;

        if(i==1)
        {
            maior = temp;
            menor = temp;
        }
        else
        {
            if(temp > maior)
                maior = temp;
            if(temp < menor)
                menor = temp;
        }
    }

    media = soma/4;
    printf("Média das temperaturas = %.2f\n", media);
    printf("Maior = %.2f\n", maior);
    printf("Menor = %.2f\n", menor);


    

    return 0;
}