/* Faça um programa em C que leia 3 notas de um aluno,
Cada nota possui um peso associado. O programa também terá que solicitar
a leitura de cada peso.
Por fim, calcule a média ponderada do aluno baseada nos pesos e escreva na
tela. */

#include <stdio.h>

int main()
{
    float n1,n2,n3,p1,p2,p3, media_p;
    printf("Digite a nota 1: \n");
    scanf("%f", &n1);
    printf("Digite o peso 1: \n");
    scanf("%f", &p1);

    printf("Digite a nota 2: \n");
    scanf("%f", &n2);
    printf("Digite o peso 2: \n");
    scanf("%f", &p2);

    printf("Digite a nota 3: \n");
    scanf("%f", &n3);
    printf("Digite o peso 3: \n");
    scanf("%f", &p3);

    media_p = (n1*p1 + n2*p2 + n3*p3)/(p1+p2+p3);
    printf("A media ponderada do aluno = %.2f", media_p);



}