/* Crie uma struct para armazenar o nome, o preço e a quantidade em estoque de produtos de
uma loja. Na main(), o programa deve criar um array para armazenar 5 produtos. Solicite ao
usuário para entrar com os dados. Em seguida, calcule e mostre:
- o capital financeiro em estoque para cada produto (preço * quantidade em estoque);
- a média dos preços dos produtos;
- os dados dos produtos que possuem preço acima da média. */

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <string.h>
#define TAM 5

typedef struct
{
    char nome[30];
    float preco;
    int qtd_estoque;

} Produtos;

int main()
{

    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(CP_UTF8);

    Produtos prod[TAM];

    float cap_fin = 0;
    float media_prod = 0;

    printf("==========Cadastro dos produtos======\n");

    int i, soma = 0;
    for (i = 0; i < TAM; i++)
    {
        printf("\nNome do produto %d: ", i+1);
        fgets(prod[i].nome, sizeof(prod[i].nome), stdin);
        prod[i].nome[strcspn(prod[i].nome, "\n")] = '\0';

        printf("\nPreço do produto %d: ", i + 1);
        scanf("%f", &prod[i].preco);
        soma += prod[i].preco;

        while (getchar() != '\n');

        printf("\nQuantidade do produto %d: ", i + 1);
        scanf("%d", &prod[i].qtd_estoque);

        while (getchar() != '\n');
    }

    media_prod = soma / TAM;

    for (i = 0; i < TAM; i++)
    {
        cap_fin = prod[i].preco * prod[i].qtd_estoque;
        printf("\nCapital Financeiro do produto %d = R$%.2f", i + 1, cap_fin);
    }

    printf("\n\nMedia de preço dos produtos = %.2f", media_prod);

    printf("\n\n=============== Produtos com o preço acima da média ===========\n\n");
    for (i = 0; i < TAM; i++)
    {
        if (prod[i].preco > media_prod)
        {
            printf("Nome do produto: %s\n", prod[i].nome);
            printf("Preço do produto: %.2f\n", prod[i].preco);
            printf("Quantidade do produto: %d\n", prod[i].qtd_estoque);
        }
    }

    return 0;
}