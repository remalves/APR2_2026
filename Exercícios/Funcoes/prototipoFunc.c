/* O protótipo de uma função é uma declaração antecipada que informa ao compilador: o
nome da função, o tipo de retorno e os tipos dos parâmetros.
Deve ser declarado antes da chamada da função.
A estrutura de um protótipo é idêntica à primeira linha da função, terminando com ponto
e vírgula (;) */

#include <stdio.h>

int somar(int a, int b);

int main()
{
    int resultado = somar(5, 3); // OK, programa conhece protótipo
    printf("%d",resultado);
    return 0;
}

int somar(int a, int b)
{
    return a + b;
}
