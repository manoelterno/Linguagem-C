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
