#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int casos, bateu = 1;
    scanf("%d", &casos);
    char texto[1001];
    char busca[1001];
    for (int i = 0; i < casos; i++)
    {
        int i3 = 0;
        scanf("%s", texto);
        scanf("%s", busca);
        if (strlen(texto) < strlen(busca))
        {
            printf("nao encaixa\n");
            continue;
        }
        for (unsigned int i2 = strlen(texto) - strlen(busca); i2 < strlen(texto); i2++)
        {
            if(texto[i2] != busca[i3])
            {
                printf("nao encaixa\n");
                bateu = 0;
                break;
            }
            i3++;
        }
        if(bateu)
        {
            printf("encaixa\n");
        }
        else
            bateu = 1;
    }
return 0;
}