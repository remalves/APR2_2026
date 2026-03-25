#include <stdio.h>
#include <locale.h>
#include <windows.h>

float lerNotaValida()
{
    float nota;
    
    do
    {
        scanf("%f", &nota);
        if (nota < 0 || nota > 10)
        {
            printf("Nota inválida. Digite novamente: ");
        }
    } while (nota < 0 || nota > 10);
    return nota;
}

float calcularMedia(float n1, float n2)
{
    return (n1 + n2) / 2;
}

void exibirSituacao(float media)
{
    if (media >= 6)
    {
        printf("Aprovado\n");
    }
    else if (media >= 4)
    {
        printf("IFA\n");
    }
    else
    {
        printf("Reprovado\n");
    }
}

void imprimirMensagem(char texto[])
{
    printf("**************************\n");
    printf("*** %s ***\n", texto);
    printf("**************************\n");
}

int main()
{
    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(CP_UTF8);

    float nota1, nota2, media;

    imprimirMensagem("Início do programa\n");

    printf("Digite a primeira nota: ");
    nota1 = lerNotaValida();

    printf("\nDigite a segunda nota: ");
    nota2 = lerNotaValida();

    media = calcularMedia(nota1, nota2);
    exibirSituacao(media);

    imprimirMensagem("\nFim do programa\n");

    return 0;
}
