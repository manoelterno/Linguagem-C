#include <stdio.h>
#include <string.h>
int main(){
    int casos, quantidade, ingles = 0, primeira_lingua = 0;
    scanf("%d", &casos);
    char primeira[21], segunda[21];
    for (int i = 0; i < casos; i++)
    {
        scanf("%d", &quantidade);
        for (int i2 = 0; i2 < quantidade; i2++)
        {
            scanf("%s", primeira);
            if(primeira_lingua)
            {
                strcpy(segunda, primeira);
                primeira_lingua = 0;
                continue;
            }
            if(strcmp(primeira, segunda))
            {
                ingles = 1;
            }
            strcpy(segunda, primeira);
        }
        if (ingles)
        {
            printf("ingles\n");
            ingles = 0;
        }
        else
            printf("%s\n", primeira);
        primeira_lingua = 1;
    }
    return 0;
} 




