/*  Arrays nunca são passados por valor.
– Arrays NÃO são copiados. A função recebe o endereço de memória e trabalha
com o array original. Isso também vale para strings, já que são arrays de char.
– Logo, qualquer alteração no array dentro da função será refletida no original.
 Em C, não é permitido retornar arrays diretamente a partir de uma função. Para
devolver um array, geralmente trabalhamos alterando o array que foi passado como
parâmetro ou utilizando alocação dinâmica (ponteiros – veremos mais adiante). */

//Exemplo: dimensão pode ser omitida


#include <stdio.h>

void imprimir(int v[], int n) //n é o tam do array
{
    for(int i=0; i<n;i++)
    {
        printf("%d\n", v[i]);
    }

}


void multiplicaVetor(int vet[], int n, int fator)
{
    for(int i =0; i<n; i++)
    {
        vet[i]*=fator; //modifica o vetor original
    }
}

void imprimirMatriz(int m[][3], int linhas)
{
    for(int i=0; i<linhas;i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d", m[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int v[3] = {1,2,3};
    imprimir(v, 3);

    printf("\nExemplo 2: \n");
    int num[] = {1,2,3,4,5};
    multiplicaVetor(num, 5, 2);
    imprimir(num, 5);

    printf("\nExemplo 3 - Array multidimensional: \n");
    //primeira dimensão pode ser omitida
    int mat[2][3] = {{1,2,3}, {4,5,6}};

    imprimirMatriz(mat,2);

    return 0;
}