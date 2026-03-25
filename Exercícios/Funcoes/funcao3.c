//Com retorno e sem parâmetros
/* 
    Exemplos de uso:
        Ler dados do teclado (como menus, opções)
        Retornar constantes ou configurações padrão
        Consultar estado do sistema 
*/

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

int gerarNum()
{
    return rand()%100;
}


int main()
{
    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(CP_UTF8);

    srand(time(NULL));
    int num = gerarNum();
    printf("Número gerado: %d\n", num);

    

    return 0;
}