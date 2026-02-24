/* Faça um programa em C que leia o raio de uma esfera, calcule e mostre sua
área (A) e seu volume (V). Utilize constante para armazenar o valor de PI
(3.14159).
 */

#include <stdio.h>
#define PI 3.14159

int main()
{
    float raio, A, V;
    printf("Digite o valor do raio: \n");
    scanf("%f", &raio);
    A = 4 * PI * (raio * raio);
    V = 4 * PI * (raio * raio * raio)/3;
    printf("Area do circulo =  %.2f e Volume do circulo =  %.2f\n", A, V);
}