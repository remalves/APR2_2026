/* Crie as seguintes structs aninhadas para representar informações de um funcionário:
Data, contendo os campos: dia, mes e ano
Cidade, contendo os campos: nome e uf.
Endereco, contendo os campos: rua, numero e cidade (do tipo Cidade).
Funcionario, contendo os campos: nome, data_admissao (do tipo Data) e endereco (do tipo
Endereco).
Na main(), peça para o usuário entrar com os dados de um funcionário.  */

#include <stdio.h>
#include <locale.h>
#include <windows.h>

typedef struct
{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct
{
    char nome[30];
    char uf[3];

} Cidade;

typedef struct
{
    char rua[30];
    int num;
    Cidade cidade;
} Endereco;

typedef struct
{
    char nomeFunc[30];
    Data dataAdmissao;
    Endereco enderecoFuncionario;

} Funcionario;

int main()
{
    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(CP_UTF8);

    Funcionario func1;

    printf("Informe os dados de 1 funcionário: \n");

    printf("Informe o nome: \n");
    fgets(func1.nomeFunc, sizeof(func1.nomeFunc), stdin);
    func1.nomeFunc[strcspn(func1.nomeFunc, "\n")] = '\0';

    printf("\nInforme a data de admissão: \n");
    printf("\nDia: ");
    scanf("%d", &func1.dataAdmissao.dia);
    printf("\nMês: ");
    scanf("%d", &func1.dataAdmissao.mes);
    printf("\nAno: ");
    scanf("%d", &func1.dataAdmissao.ano);

    while (getchar() != '\n')
        ;

    printf("\nInforme o endereço do funcionário: \n");

    printf("\nNome da rua: ");
    fgets(func1.enderecoFuncionario.rua, sizeof(func1.enderecoFuncionario.rua), stdin);
    func1.enderecoFuncionario.rua[strcspn(func1.enderecoFuncionario.rua, "\n")] = '\0';

    printf("\nNúmero do endereço: ");
    scanf("%d", &func1.enderecoFuncionario.num);
    while (getchar() != '\n')
        ;

    printf("\nCidade: ");
    fgets(func1.enderecoFuncionario.cidade.nome, sizeof(func1.enderecoFuncionario.cidade.nome), stdin);
    func1.enderecoFuncionario.cidade.nome[strcspn(func1.enderecoFuncionario.cidade.nome, "\n")] = '\0';

    printf("\nSigla da Cidade: ");
    fgets(func1.enderecoFuncionario.cidade.uf, sizeof(func1.enderecoFuncionario.cidade.uf), stdin);
    func1.enderecoFuncionario.cidade.uf[strcspn(func1.enderecoFuncionario.cidade.uf, "\n")] = '\0';



    printf("\n -------- Dados do funcionário: ----------- \n");
    printf("\nNome: %s", func1.nomeFunc);
    printf("\nData Admissão: %d/%d/%d", func1.dataAdmissao.dia, func1.dataAdmissao.mes, func1.dataAdmissao.ano);
    printf("\nEndereço: Rua: %s, Nº %d, Cidade: %s, UF: %s",func1.enderecoFuncionario.rua,func1.enderecoFuncionario.num, func1.enderecoFuncionario.cidade.nome, func1.enderecoFuncionario.cidade.uf);

    return 0;
}