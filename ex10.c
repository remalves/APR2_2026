/* Joaquim comprou um saco de ração cujo peso é informado em quilos. Ele possui dois
gatos e fornece a mesma quantidade diária de ração, medida em gramas, para cada um
deles.
Faça um programa em C que leia:
- o peso do saco de ração (em quilos);
- a quantidade diária de ração fornecida a cada gato (em gramas).
Em seguida, o programa deve calcular e exibir quanto de ração restará, em quilos, após 5
dias alimentando os dois gatos. */

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#define CATS 2
#define DAYS 5

int main()
{
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "pt-BR");

    float peso_saco, qtd_racao, resto, qtd_racao_em_kg;

    printf("Digite o peso do saco de ração (em quilos): \n");
    scanf("%f", &peso_saco);

    printf("Digite a quantidade diária de ração fornecida a cada gato (em gramas): \n");
    scanf("%f", &qtd_racao);

    qtd_racao_em_kg = (qtd_racao * CATS * DAYS) / 1000; 

    resto = peso_saco - qtd_racao_em_kg; 
    printf("Restará = %.2fkg de ração após %d dias alimentando os %d gatos\n", resto, DAYS, CATS);

    return 0;


}