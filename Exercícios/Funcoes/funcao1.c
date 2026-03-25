// Função sem retorno e sem parâmetros

/*
Exemplos de uso:
Exibir menus, cabeçalhos ou rodapés;
Inicializar recursos do sistema.
*/

#include <stdio.h>
#include <locale.h>
#include <windows.h>

void MostrarMenu()
{
    printf("1-Opção 1\n");
    printf("2-Opção 2\n");
    printf("3-Opção 3\n");
}

void mostrarCabecalho()
{
    printf("==================================\n");
    printf(" SISTEMA DE GESTÃO ACADÊMICA \n");
    printf(" Versão 1.0 \n");
    printf("==================================\n");
}

int main()
{
    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(CP_UTF8);

    mostrarCabecalho();

    MostrarMenu();

    

    return 0;
}