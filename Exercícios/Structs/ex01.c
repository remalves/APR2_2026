/* Crie uma struct Carro com os campos: placa, marca, modelo e anoFabricacao. Declare uma
variável do tipo Carro na main() e leia seus dados via teclado. */

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <string.h>

typedef struct
{
    char placa[8];
    char marca[20];
    char modelo[20];
    int ano;

} Carro;

int main()
{
    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(CP_UTF8);

    Carro c1;

    printf("Digite a placa do carro: ");
    fgets(c1.placa, sizeof(c1.placa), stdin);
    c1.placa[strcspn(c1.placa, "\n")] = '\0';

    printf("\nDigite a marca do carro: ");
    fgets(c1.marca, sizeof(c1.marca), stdin);
    c1.marca[strcspn(c1.marca, "\n")] = '\0';

    printf("\nDigite a modelo do carro: ");
    fgets(c1.modelo, sizeof(c1.modelo), stdin);
    c1.modelo[strcspn(c1.modelo, "\n")] = '\0';

    printf("\nDigite o ano de fabricação do carro: ");
    scanf("%d", &c1.ano);

    
    printf("\n================ Dados do carro =======================\n");
    printf("Placa do carro: %s \n", c1.placa);
    printf("Marca do carro: %s \n", c1.marca);
    printf("Modelo do carro: %s \n", c1.modelo);
    printf("Ano de Fabricação do carro: %d \n", c1.ano);


    return 0;
}
