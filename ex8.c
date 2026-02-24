/* Faça um programa em C que leia a cotação do dólar em reais.
Em seguida, o programa deverá ler um valor representando uma quantidade
de dólar e a converter para reais, mostrando o resultado na tela.
Formate a saída para 2 casas decimais. */

#include <stdio.h>
#include <locale.h>
#include <Windows.h> // Necessário para SetConsoleOutputCP

int main()
{
    // Configura a saída do console para UTF-8
    SetConsoleOutputCP(65001);
    // Opcional: Define a localidade para garantir funções de string corretas
    setlocale(LC_ALL, "pt-BR");

    float cotacao_dol, qtd_dol, valor_reais;

    printf("Digite a cotação do dolar em R$\n");
    scanf("%f", &cotacao_dol);

    printf("Quantos dolares deseja converter? \n");
    scanf("%f", &qtd_dol);

    valor_reais = qtd_dol * cotacao_dol;
    printf("Valor em reais: %.2f", valor_reais);


}