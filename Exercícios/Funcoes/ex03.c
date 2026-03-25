/* 3. Implemente uma função em C que receba como parâmetro uma string contendo
exatamente 11 dígitos numéricos (sem pontos ou traços) representando um CPF.
A função deverá mostrar o CPF formatado no padrão brasileiro: 000.000.000-00.
 */

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <string.h>


void FormatarCpf(char cpf[])
{
    if(strlen(cpf)!= 11)
    {
        printf("Cpf inválido!");
        return;
    }

    printf("%.3s.%.3s.%.3s-%.2s", cpf, cpf+3, cpf+6, cpf+9);

}

int main()
{
    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(CP_UTF8);

    char cpf[15];

    printf("Digite seu cpf sem traços ou pontos: ");
    fgets(cpf, sizeof(cpf), stdin);
    cpf[strcspn(cpf, "\n")] = '\0';

    FormatarCpf(cpf);

    return 0;
}