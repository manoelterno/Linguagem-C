#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int tam;
    scanf("%d", &tam);
    double **matriz1 = malloc(sizeof(double) * tam);
    double **matriz2 = malloc(sizeof(double) * tam);
    double **matriz3 = malloc(sizeof(double) * tam);
    for (int i = 0; i < tam; i++)
    {
        matriz1[i] = malloc(sizeof(double) * tam);
        matriz2[i] = malloc(sizeof(double) * tam);
        matriz3[i] = malloc(sizeof(double) * tam);
    }

    for (int linha = 0; linha < tam; linha++)
    {
        for (int coluna = 0; coluna < tam; coluna++)
        {
            scanf("%lf", &matriz1[linha][coluna]);
        }
    }

    for (int linha = 0; linha < tam; linha++)
    {
        for (int coluna = 0; coluna < tam; coluna++)
        {
            scanf("%lf", &matriz2[linha][coluna]);
        }
    }

    int soma;

    for (int linha = 0; linha < tam; linha++)
    {
        for (int coluna = 0; coluna < tam; coluna++)
        {
            soma = 0;
            for (int i = 0; i < tam; i++)
            {
                soma += matriz1[linha][i] * matriz2[i][coluna];
            }
            matriz3[linha][coluna] = soma;
        }
    }
    for (int linha = 0; linha < tam; linha++)
    {
        for (int coluna = 0; coluna < tam; coluna++)
        {
            printf("%lf ", matriz3[linha][coluna]);
        }
        printf("\n");
    }

    for (int i = 0; i < tam; i++)
    {
        free(matriz1[i]);
        free(matriz2[i]);
        free(matriz3[i]);
    }
    free(matriz1);
    free(matriz2);
    free(matriz3);
    return 0;
}
