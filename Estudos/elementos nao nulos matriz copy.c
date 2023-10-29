#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 10
int main(){
    int matriz[tam][tam], contador = 0;
    for(int i = 0; i < tam; i++)
    {
        for(int i2 = 0; i2 < tam; i2++)
        {
            scanf("%d", &matriz[i][i2]);
            if(matriz[i][i2] != 0)
                contador++;
        }
    }
    printf("%d", contador);

    
    
    return 0;
} 




