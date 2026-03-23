/* 5. Faça um programa para ler uma string digitada pelo usuário. E seguida, deverá ser lido um
caractere qualquer. O programa deverá procurar este caractere na string e substituir todas as
suas ocorrências por asterisco (*). Ao final, mostre a string resultante. */

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(CP_UTF8);

    char str[30];

    printf("Digite uma palavra: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    char letra;

    printf("Digite um caractere a ser substituido por *: ");
    scanf(" %c", &letra);

    for (int i = 0; str[i]!='\0'; i++)
    {
        if (str[i] == letra) // nesse caso estamos comparando caractere com caractere, por isso nao usamos as funções prontas de strings
            str[i] = '*';
    }

    printf("Depois: \n");
    printf("%s", str);

    return 0;
}