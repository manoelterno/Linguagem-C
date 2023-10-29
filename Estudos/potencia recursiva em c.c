#include <stdio.h>
#include <stdlib.h>
int potencia(int base, int expoente)
{
    if (expoente == 1)
        return base;
    else
        return base * potencia(base, expoente - 1);
}

int main()
{
     int base, expoente;
     printf("%d\n", potencia(2, 4));
}