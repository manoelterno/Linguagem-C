/*Números palíndromos são aqueles que têm o mesmo valor se lidos da esquerda para
direita ou da direita para esquerda. Por exemplo, 44, 232, 123321. Fazer um
programa que imprima todos os números N, (0 ≤ N ≤ 10.000) que são palíndromos.
Dica: use operações sobre números inteiros, tais como: divisão inteira, subtração e
multiplicação, resto de divisão inteira, entre outras. 
*/

#include <stdio.h>
int main()
{
    int n, r, a;
    for (n = 1; n < 10000; n++)
    {
        r = 0;
        a = n;
        while (a != 0)
        {
            r = r * 10 + a % 10;
            a = a / 10;
        }
        if (r == n)
            printf("%d\n", n);
    }
    return 0;
}