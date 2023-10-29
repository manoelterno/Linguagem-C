#include <stdio.h>
#define tam 12
int main()
{
    int c;
    float matriz[tam][tam], soma = 0;
    char tipo;
    scanf("%d", &c);
    getchar();
    scanf("%c", &tipo);

    for (int i = 0; i < tam; i++)
    {
        for (int i2 = 0; i2 < tam; i2++)
        {
            scanf("%f", &matriz[i][i2]);
        }
    }
    if (tipo == 'S')
    {
        for (int i3 = 0; i3 < tam; i3++)
        {
            soma = soma + matriz[i3][c];
            printf("somou");
        }
        printf("%.1f\n", soma);
    }
    if (tipo == 'M')
    {
        for (int i3 = 0; i3 < tam; i3++)
        {
            soma = soma + matriz[i3][c];
        }
        printf("%.1f\n", soma / tam);
    }
    return 0;
}
