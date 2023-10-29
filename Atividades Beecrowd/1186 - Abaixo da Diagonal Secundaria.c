#include <stdio.h>
#define tam 12
int main(){
    int pular = 1;
    float soma = 0;
    char tipo;
    scanf("%c", &tipo);
    float matriz[tam][tam];
    for (int i = 0; i < tam; i++)
    {
        for (int i2 = 0; i2 < tam; i2++)
        {
            scanf("%f", &matriz[i][i2]);
        }
    }
    if (tipo == 'S')
    {
        for (int i2 = tam - 1; i2 > 0; i2--)
        {
            for (int i = pular; i < tam; i++ )
            {
                soma += matriz[i][i2];
            }   
            pular++;
        }
        printf("%.1f\n", soma);
    }
    if (tipo == 'M')
    {
        int contador = 0;
        for (int i2 = tam - 1; i2 > 0; i2--)
        {
            for (int i = pular; i < tam; i++ )
            {
                soma += matriz[i][i2];
                contador++;
            }   
            pular++;
        }
        printf("%.1f\n", soma / contador);
    }
    return 0;
} 




