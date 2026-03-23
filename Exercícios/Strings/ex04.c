/* 4. Faça um programa para validar nome de usuário de login de acordo com as regras:
- deve ter entre 5 e 15 caracteres;
- não pode conter espaços;
- deve começar com uma letra.
 */

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
    int eh_valido;

    do
    {
        eh_valido = 1;
        printf("Digite o nome de usuário: \n");
        fgets(user, sizeof(user), stdin); //Se o usuário digitar mais de 15 caracteres, o fgets corta o resto, evitando estouro de buffer
        user[strcspn(user, "\n")] = '\0';
        int tam = strlen(user);

        if (tam < 5 || tam > 15)
        {
            printf("O nome de usuário deve conter entre 5 e 15 caracteres.\n");
            eh_valido = 0;
        }
            
        for (int i = 0; i < tam; i++)
        {
            if (isspace(user[i]))
            {
                printf("O nome de usuário não pode conter espaços.\n");
                eh_valido = 0;
                break;
            }
        }

        if (!isalpha(user[0]))
        {
            printf("O nome de usuário deve começar com uma letra.\n");
            eh_valido = 0;
        }
    } while (!eh_valido);

    printf("Login Válido!\n");
}
