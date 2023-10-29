#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int casos;
    scanf("%d", &casos);
    getchar();
    char texto[51];
    int primeiro = 0;
    for (int i = 0; i < casos; i++)
    {
        gets(texto);
        for(int i2 = 0; i2 < strlen(texto); i2++)
        {
            if (texto[i2] != ' ')
            {
                if (primeiro != 0)
                    continue;
                else
                {
                    printf("%c", texto[i2]);
                    primeiro = 1;
                    continue;
                }
            }
            if(texto[i2] == ' ' && primeiro != 0)
            {
                primeiro = 0;
                continue;
            }

        }
        printf("\n");
        primeiro = 0;
    }
    return 0;
}