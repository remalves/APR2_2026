#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <math.h>

void lerVetor(float v[],int tam)
{
    printf("Preencha o vetor: \n");

    for(int i=0;i<tam;i++)
    {
        printf("Digite um número: ");
        scanf("%f", &v[i]);
    }
}


void exibirVetor(float v[], int tam)
{
    for(int i = 0; i< tam; i++)
    {
        printf("%.2f - ", v[i]);
    }
}

float mediaValores(float v[], int tam)
{
    float soma = 0;
    for(int i =0; i<tam; i++)
    {
        soma+=v[i];
    }

    return soma / tam; 

}

float calcularVariancia(float v[], int tam, float media)
{
    float soma = 0;
    for(int i=0; i<tam;i++)
    {
        soma += pow(v[i] - media, 2); 
    }
    return soma / tam; 
}

float calcularDesvioPadrao(float variancia)
{
    return sqrt(variancia);
}

void atualizaValoresVetor(float v[], int tam, float media)
{
    float porc; 
    printf("Qual a porcentagem deseja aplicar aos valores abaixo da média: ");
    scanf("%f", &porc);

    for(int i=0; i<tam;i++)
    {
        if(v[i] < media)
        {
            v[i] += v[i] * (porc / 100);
        }
    }
}




int main()
{
    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(CP_UTF8);

    float vet[10];

    lerVetor(vet,10);

    exibirVetor(vet, 10);

    float media = mediaValores(vet, 10);
    printf("\nMédia dos valores: %.2f\n", media);

    float variancia = calcularVariancia(vet, 10, media);
    printf("\nVariância dos valores: %.2f\n", variancia);

    float desvio = calcularDesvioPadrao(variancia);
    printf("\nDesvio padrão: %.2f\n", desvio);

    atualizaValoresVetor(vet, 10, media); 
    printf("\nVetor Atualizado: \n");
    exibirVetor(vet, 10);
    

    return 0;
}