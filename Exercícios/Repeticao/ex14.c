/* Faça um programa que leia 2 notas obtidas por cada um dos 5 alunos nas avaliações
de uma disciplina. Faça validação para garantir que as notas estejam no intervalo entre 0
e 10.
Para cada aluno, calcule a média aritmética das notas e mostre o resultado, conforme
abaixo:
Média entre 6 e 10: Aprovado
Média entre 4 e 5.99: IFA
Média entre 0 e 3.99: Reprovado
Mostre também qual foi a maior média obtida */

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#define ALUNOS 2
#define QTD_NOTAS 2

int main()
{
    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(CP_UTF8);
    float nota_Aluno, soma_notas_aluno, media_aluno = 0, maior_media;
    int i, j;

    for (i = 1; i <= ALUNOS; i++)
    {
        if(i == 1)
            printf("Aluno %d: \n", i);
        else
            printf("\nAluno %d: \n", i);

        soma_notas_aluno = 0;

        for (j = 1; j <= QTD_NOTAS; j++)
        {
            nota_Aluno = 0;
            do
            {
                printf("Nota %d: \n", j);
                scanf("%f", &nota_Aluno);
            } while (nota_Aluno < 0 || nota_Aluno > 10);

            soma_notas_aluno += nota_Aluno;
        }
        media_aluno = soma_notas_aluno / QTD_NOTAS;
        printf("A média do aluno %d = %.2f\n", i, media_aluno);

        if(media_aluno >=6 && media_aluno <=10)
        {
            printf("Aluno APROVADO\n");
        }
        else if(media_aluno >= 4 && media_aluno <= 5.99)
        {
            printf("Aluno de IFA\n");
        }
        else
        {
            printf("Aluno reprovado\n");
        }

        if (media_aluno == 1) //O primeiro aluno vira minha referência.
        {
            maior_media = media_aluno; //Depois disso, só troco se aparecer alguém com média maior
        }
        else //Depois disso, só troco se aparecer alguém com média maior
        {
            if (media_aluno > maior_media)
            {
                maior_media = media_aluno;
            }
        }
    }

    printf("\nMaior média da turma = %.2f\n", maior_media);

    return 0;
}