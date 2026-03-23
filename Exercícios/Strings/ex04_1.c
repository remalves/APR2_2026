#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(CP_UTF8);
    char user[30];
    int tam;
    while (tam < 5 || tam > 15)
    {
        printf("Digite seu usuário: ");
        fgets(user, sizeof(user), stdin);
        user[strcspn(user, "\n")] = '\0';
        tam = strlen(user);
    }

    printf("%s\n", user);

    return 0;
}