#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {

    int casos, cifra;
    scanf("%d", &casos);
    char alfabeto[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char texto[51];
    int achou = 0, posicao, posicao_no_alfabeto;
    for (int i = 0; i < casos; i++)
    {
        scanf("%s", texto);
        scanf("%d", &cifra);
        for (int i2 = 0; i2 < strlen(texto); i2++)
        {
            for (int i3 = 0; i3 < 26; i3++)
            {
                if (texto[i2] == alfabeto[i3])
                {
                    achou = 1;
                    posicao_no_alfabeto = i3;
                    break;
                }
            }
            if(achou)
            {
                posicao = posicao_no_alfabeto - cifra;
                achou = 0;
                if (posicao < 0)
                {
                    printf("%c", alfabeto[26 + posicao]);
                }
                else
                {
                    printf("%c", alfabeto[posicao]);
                }
                continue;
            }
        }
        printf("\n");
    }

    return 0;
}
