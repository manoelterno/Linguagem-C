#include <stdio.h>
int main()
{
    int n, posicao, menor;
    scanf("%d", &n);
    int v[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
        if (menor)
        {
            if (v[i] < menor)
            {
                menor = v[i];
                posicao = i;
            }
        }
        else
        {
            menor = v[i];
            posicao = i;   
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n", menor, posicao);
    return 0;
}
