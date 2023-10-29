/*Faça um programa em que, dado um número inteiro N, escreva o maior divisor de
N que é uma potência de um dos números primos fatorados*/ 
#include <stdio.h>

int ehprimo(int n)
{
    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int elevar(int b, int e)
{
    int t = b;
    for (int i = 1; i < e; i++)
    {
        b = b * t;
    }
    return b;
}

int main()
{
    int n, maior = 1, verificar, pot;
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        pot = 0;
        if (ehprimo(i) && (n % i == 0))
        {
            while (n % i == 0)
            {
                n = n / i;
                pot++;
            }
        }
        verificar = elevar(i, pot);
        if (verificar > maior)
            maior = verificar;
    }
    printf("%d\n", maior);
    return 0;
}