#include <stdio.h>
#include <locale.h>
#include <windows.h>

typedef struct
{
    char nome[50];
    int idade;
    float notas[3];
} Aluno;

Aluno lerDadosAluno();        // retorna Aluno
float calcularMedia(Aluno a); // recebe Aluno como parametro
void exibirAluno(Aluno a);    // recebe Aluno como parametro

int main()
{
    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(CP_UTF8);

    Aluno aluno1 = lerDadosAluno();

    exibirAluno(aluno1);

    printf("Média: %.2f\n", calcularMedia(aluno1));

    return 0;
}

Aluno lerDadosAluno()
{
    Aluno a;

    printf("Digite o nome: ");
    fgets(a.nome, sizeof(a.nome), stdin);
    a.nome[strcspn(a.nome,"\n")] = '\0';

    printf("Digite a idade: ");
    scanf("%d", &a.idade);

    for (int i = 0; i < 3; i++)
    {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &a.notas[i]);
    }

    return a;
}


float calcularMedia(Aluno a)
{
    float soma = 0;

    for(int i = 0; i<3; i++)
    {
        soma+=a.notas[i];
    }

    return soma/3;
}

void exibirAluno(Aluno a)
{
    printf("Nome: %s\n", a.nome);
    printf("Idade: %d\n", a.idade);
    printf("Notas:\n");
    for(int i=0; i<3;i++)
    {
        printf("Nota %d: %.2f\n", i+1, a.notas[i]);
    }

}
