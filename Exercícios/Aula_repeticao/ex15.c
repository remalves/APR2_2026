/* Faça um programa em C que leia a pressão arterial sistólica e diastólica de N
pacientes durante M dias.
Para cada paciente, o programa deve calcular a média da pressão sistólica e da pressão
diastólica ao final do período e exibir a classificação da pressão média, de acordo com
os critérios abaixo:
Normal: pressão sistólica ≤ 12 e pressão diastólica ≤ 8
Hipertenso: pressão sistólica > 12 ou pressão diastólica > 8 */

#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{
    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(CP_UTF8);
    float pSistolica, pDiastolica, somaPSis = 0, somaPdias = 0, mediaSis = 0, mediaDiast = 0;
    int i, j, N, M;

    printf("Quantidade de pacientes: \n");
    scanf("%d", &N);

    printf("Quantidade de dias: \n");
    scanf("%d", &M);

    for (i = 0; i < N; i++)
    {
        if (i == 0)
            printf("Paciente %d\n", i + 1);
        else
            printf("\nPaciente %d\n", i + 1);

        for (j = 0; j < M; j++)
        {
            if (j == 0)
                printf("Dia %d\n", j + 1);
            else
                printf("\nDia %d\n", j + 1);

            printf("Digite a pressão Sistólica: \n");
            scanf("%f", &pSistolica);
            somaPSis += pSistolica;
            printf("Digite a pressão Diastólica: \n");
            scanf("%f", &pDiastolica);
            somaPdias += pDiastolica;
        }

        mediaSis = somaPSis / M;
        mediaDiast = somaPdias / M;

        if (mediaSis <= 12 && pDiastolica <= 8)
            printf("Pressão normal\n");
        if (mediaSis > 12 || mediaDiast > 8)
            printf("Hipertensão\n");
    }

    return 0;
}
