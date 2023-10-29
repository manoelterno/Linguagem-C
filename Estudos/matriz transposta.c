#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 4
int main(){
    int matriz[tam][tam], transposta[tam][tam];
    for(int i = 0; i < tam; i++)
    {
        for(int i2 = 0; i2 < tam; i2++)
        {
            scanf("%d", &matriz[i][i2]);
            transposta[i2][i] = matriz[i][i2];
        }
    }
    printf("\nMATRIS ORIGINAL\n");
    for(int i = 0; i < tam; i++)
    {
        for(int i2 = 0; i2 < tam; i2++)
        {
            printf("%d ", matriz[i][i2]);
        }
        printf("\n");
    }
    printf("\nMATRIS TRANSPOSTA\n");
    for(int i = 0; i < tam; i++)
    {
        for(int i2 = 0; i2 < tam; i2++)
        {
            printf("%d ", transposta[i][i2]);
        }
        printf("\n");
    }
    
    return 0;
} 




