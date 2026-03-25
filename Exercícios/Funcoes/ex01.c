/* Crie a função void retangulo(int largura, int altura, char simbolo) que
desenha um retângulo com as dimensões e símbolo fornecidos como parâmetros.
Exemplo: a chamada retangulo(5, 3, '*') deve desenhar:
*****
*****
***** */

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <string.h>


void retangulo(int largura, int altura, char simbolo)
{
    printf("Desenho:\n");

    for(int i = 0; i < altura;i++)
    {
        for(int j=0; j < largura; j++)
        {
            printf("%c",simbolo);
        }
        printf("\n");
    }
}

int main()
{
    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(CP_UTF8);

    int l, alt;
    char simbolo;

    printf("Informe a largura: ");
    scanf("%d", &l);

    printf("Informe a altura: ");
    scanf("%d", &alt);

    //while(getchar()!='\n');

    printf("Informe o simbolo escolhido: ");
    scanf(" %c", &simbolo);

    retangulo(l,alt,simbolo);

    

    return 0;
}