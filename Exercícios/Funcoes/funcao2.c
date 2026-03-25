// sem retorno e com parâmetros
/*
    Exemplo de uso:
    Exibir mensagens variáveis;
    Atualizar estado do programa
*/

#include <stdio.h>
#include <locale.h>
#include <windows.h>

void imprimirMensagem(char texto[])
{
    printf("Mensagem: %s\n", texto);
}

void exibirSituacao(float media)
{
    if (media >= 6)
    {
        printf("Aprovado!\n");
    }
    else if (media >= 4)
    {
        printf("IFA\n");
    }
    else
    {
        printf("Reprovado!\n");
    }
}

int main()
{
    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(CP_UTF8);

    imprimirMensagem("Inicio do Programa!\n");
    
    exibirSituacao(5.5);
    exibirSituacao(9.5);

    imprimirMensagem("Fim do Programa!\n");

    return 0;
}
