/* Desafio: 
Suponha agora que existam 10 alunos e que cada um tenha realizado 3 avaliações.
É preciso:
• ler todas as notas;
• calcular a média de cada avaliação (considerando todos os alunos);
• calcular a média de cada aluno (considerando suas três avaliações). */

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#define ALUNOS 2
#define PROVAS 2


int main()
{
    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(CP_UTF8);

    float notas[PROVAS][ALUNOS];

    //let as notas
    int i,j;
    for(i=0;i<PROVAS;i++)
    {
        printf("\nProva %d:", i+1);
        for(j=0; j<ALUNOS; j++)
        {
            printf("\nDigite a nota do aluno %d= ", j+1);
            scanf("%f", &notas[i][j]);
        }
    }

    //media de cada prova
    float soma;
    for(i=0;i<PROVAS;i++)
    {
        soma = 0; //renicia a soma a cada prova
        for(j=0; j<ALUNOS; j++)
        {
            soma+=notas[i][j];
        }
        printf("\nMedia geral da prova %d = %.2f", i+1, soma/ALUNOS);
    }

    //media de cada aluno
    for(j=0;j<ALUNOS;j++)
    {
        soma = 0;
        for(i=0; i<PROVAS; i++)
        {
            soma+=notas[i][j];
        }
        printf("\nMedia do aluno %d = %.2f",j+1, soma/PROVAS);
        
    }

    return 0;
}