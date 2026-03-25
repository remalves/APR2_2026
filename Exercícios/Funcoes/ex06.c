#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <string.h>
#include <ctype.h>

void lerStrings(char str[], int tam)
{
    printf("Digite uma palavra: ");
    fgets(str, tam, stdin); //nesse caso nao da certo usar sizeof
    str[strcspn(str, "\n")] = '\0';
}

void substituirChar(char str[], char antigo, char novo)
{
    for(int i=0; str[i] != '\0' ; i++)
    {
        if(str[i] == antigo)
        {
            str[i] = novo;
        }
    }
}

int main()
{
    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(CP_UTF8);

    char str[30];
    lerStrings(str,30);
    printf("String antiga: %s\n", str);
    substituirChar(str,'a','*');
    printf("String nova: %s\n", str);


    

    return 0;
}