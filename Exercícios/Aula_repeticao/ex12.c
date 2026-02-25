/*Faça um programa que leia um conjunto de valores referentes às idades de pessoas
de uma comunidade. Quando o valor fornecido for um número negativo, significa que
não existem mais idades para serem lidas.
Após a leitura, o programa deve informar:
- A quantidade de pessoas maiores de idade (21 anos)
- A porcentagem de pessoas idosas (acima de 65 anos)  */

#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{
    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(CP_UTF8);

    int age = 1, idosos = 0, de_maior = 0;
    do
    {
        printf("Digite a idade: \nPara interromper o programa digite um número negativo.\n");
        scanf("%d", &age);

        

        if (age >= 21 && age < 65)
            de_maior++;

        if (age >= 65)
            idosos++;

    } while (age >= 1);

    printf("Total com ou acima de 21 anos = %d\n", de_maior);
    printf("Total com ou acima de 65 anos = %d\n", idosos);

    return 0;
}