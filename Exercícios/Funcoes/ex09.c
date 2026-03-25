#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <string.h>

typedef struct
{
    char placa[20];
    char marca[20];
    char modelo[20];
    int ano;
} Veiculo;

Veiculo lerDados()
{
    Veiculo carro;

    printf("Placa: ");
    fgets(carro.placa, sizeof(carro.placa), stdin);
    carro.placa[strcspn(carro.placa, "\n")] = '\0';

    printf("\nMarca: \n");
    fgets(carro.marca, sizeof(carro.marca), stdin);
    carro.marca[strcspn(carro.marca, "\n")] = '\0';

    printf("\nModelo: \n");
    fgets(carro.modelo, sizeof(carro.modelo), stdin);
    carro.modelo[strcspn(carro.modelo, "\n")] = '\0';

    printf("\nAno: \n");
    scanf("%d", &carro.ano);
    while(getchar()!='\n');

    return carro;
}

void exibirDados(Veiculo carro)
{
    printf("\n----------- Dados do Carro ---------\n")
    printf("Placa: %s\n", carro.placa);

    printf("\nMarca: %s \n", carro.marca);

    printf("\nModelo: %s \n", carro.modelo);

    printf("\nAno: %d \n", carro.ano);
}

Veiculo atualizarDados(Veiculo carro)
{
    printf("\n -------- Atualize os dados --------- \n");
    printf("Placa: ");
    fgets(carro.placa, sizeof(carro.placa), stdin);
    carro.placa[strcspn(carro.placa, "\n")] = '\0';

    printf("\nMarca: \n");
    fgets(carro.marca, sizeof(carro.marca), stdin);
    carro.marca[strcspn(carro.marca, "\n")] = '\0';

    printf("\nModelo: \n");
    fgets(carro.modelo, sizeof(carro.modelo), stdin);
    carro.modelo[strcspn(carro.modelo, "\n")] = '\0';

    printf("\nAno: \n");
    scanf("%d", &carro.ano);

    return carro;
}

int main()
{
    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(CP_UTF8);

    Veiculo carro = lerDados();

    exibirDados(carro);

    carro = atualizarDados(carro);
    printf("\n----- Dados Atualizados -------\n");
    exibirDados(carro);
    
    return 0;
}