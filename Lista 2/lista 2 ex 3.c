/*3 - (Matriz) Escreva um programa que armazene 9 valores para uma matriz 3x3 gerados
aleatoriamente, os valores devem ser menores que 100. (1) Calcule a soma dos elementos (2)
Retorne a quantidade acima do valor 50.
A função rand() devolve um número entre os limites mencionados.
A função rand() parte da mesma semente para realizar o cálculo dos números aleatórios.
Para variar a semente, é usado um valor gerado através do relógio do computador. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma = 0, quantidade = 0;
    int matriz[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matriz[i][j] = rand() % 100;
            soma += matriz[i][j];
            if (matriz[i][j] > 50)
                quantidade++;
        }
    }
    printf("Soma dos elementos: %d\nQuantidade de elementos acima de 50: %d\n", soma, quantidade);
    
    return 0;
}