#include <stdio.h>
#define tam 12
// 6 X 6 - > 2 3 4 5 9 10
// 2 3
int main()
{
    double soma = 0;
    char tipo;
    scanf("%c", &tipo);
    int parar = 1; //ate casa da coluna ele vai andar;
    int v = 0, contador  = 0;
    double matriz[tam][tam];
    for (int i = 0; i < tam; i++)
    {
        for (int i2 = 0; i2 < tam; i2++)
        {
            scanf("%lf", &matriz[i][i2]);
        }
    }
    if (tipo == 'S')
    {
        for (int i = 1; i < tam - 1; i++)
        {
            for (int i2 = 0; i2 < parar; i2++)
            {
                soma += matriz[i2][i];
            }
            if (v == 0)
            {
                parar++;
                if (parar == (tam)/2)
                {
                    v = 1;
                    parar--;
                }

            }
            else
            {
                parar--;
            }
        }
        printf("%.1lf\n", soma);
    }
    if (tipo == 'M')
    {
        for (int i = 1; i < tam - 1; i++)
        {
            for (int i2 = 0; i2 < parar; i2++)
            {
                soma += matriz[i2][i];
                contador++;
            }
            if (v == 0)
            {
                parar++;
                if (parar == (tam)/2)
                {
                    v = 1;
                    parar--;
                }

            }
            else
            {
                parar--;
            }
        }
        printf("%.1lf\n", soma / contador, contador);
    }
    return 0;
}




