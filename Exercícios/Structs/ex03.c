/* Crie uma struct Aluno com os campos: prontuário, nome, array para guardar 3 notas. Na
main(), crie um array para armazenar 5 alunos. Os dados deverão ser lidos via teclado. Em
seguida, para cada aluno, calcule a média das notas e mostre sua situação de acordo com a regra
abaixo:
“Aprovado” se média >= 6.0;
“IFA” se 4.0 <= média < 6.0;
“Reprovado” se média<4.0. */

#include <stdio.h>
#include <string.h>
#define TAM 5
#define PROVAS 3

typedef struct
{
    char prontuario[30];
    char nome[50];
    float notas[3];

} Aluno;

int main()
{
    Aluno alunos[TAM];

    printf("Preenchendo os dados dos alunos: \n");

    int i, j, soma;
    float media_notas = 0;

    for (i = 0; i < TAM; i++)
    {
        printf("\nNome do aluno %d: ", i + 1);
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

        printf("\nProntuario do aluno %d: ", i + 1);
        fgets(alunos[i].prontuario, sizeof(alunos[i].prontuario), stdin);
        alunos[i].prontuario[strcspn(alunos[i].prontuario, "\n")] = '\0';

        soma = 0;
        for (j = 0; j < PROVAS; j++)
        {
            
            printf("\nNota da Prova %d =  ", j + 1);
            scanf("%f", &alunos[i].notas[j]);
            soma += alunos[i].notas[j];
        }


        while (getchar() != '\n')
            ;

        media_notas = soma / PROVAS;

        printf("\nMedia do aluno %d = %.2f", i + 1, media_notas);

        if (media_notas >= 6)
            printf("\nAprovado");
        else if (media_notas >= 4 && media_notas < 6)
            printf("\nDE IFA");
        else
            printf("\nReprovado");
    }

    return 0;
}