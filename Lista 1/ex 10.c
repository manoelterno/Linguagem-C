/*Faça um algoritmo que encontre o n-ésimo termo da série de Fibonacci. A série de
Fibonacci é dada por:
fib(n) = fib(n-1) + fib (n-2) para n>1;
Para n=0 e n =1, o valor é dado por definição: fib(0)= 0 e fib(1) =1.
 Exemplos: fib(0) = 0 fib(1) = 1 fib(2) = fib(1) + fib(0) = 1+0 = 1*/

 #include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int v[n];
    for (int i = 0; i < n; i++)
    {
        unsigned long long int f1 = 0;
        unsigned long long int f2 = 1;
        unsigned long long int fibo = 0;
        scanf("%d", &v[i]);
        for (int i2 = 0; i2 < v[i] - 1; i2++)
        {
            fibo = f1 + f2;
            f1 = f2;
            f2 = fibo;
        }
        if (v[i] == 1)
            printf("Fib(%d) = %llu\n", v[i], fibo + 1);
        else
            printf("Fib(%d) = %llu\n", v[i], fibo);
    }
    return 0;
}