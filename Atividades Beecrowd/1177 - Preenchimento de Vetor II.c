#include <stdio.h>
int main()
{
    int v[1000], n, vetor = 0;
    scanf("%d", &n);
    while (vetor < 1000)
    {
        for (int b2 = 0; b2 < n; b2++)
        {
            v[vetor] = b2;
            printf("N[%d] = %d\n", vetor, v[vetor]);
            vetor = vetor + 1;
            if (vetor == 1000)
                break;
        }
    }
    return 0;
}
