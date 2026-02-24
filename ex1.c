/* Faça um programa em C que leia a base e a altura de um retângulo (valores
reais), calcule e exiba a sua área.*/


#include <stdio.h>

int main()
{
    int base,alt,area;
    printf("Digite a base: \n");
    scanf("%d", &base);
    printf("Digite a altura: \n");
    scanf("%d", &alt);

    area = base * alt;
    printf("Area do retangulo =  %d\n", area);
    return 0;
}