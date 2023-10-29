#include <string.h>
#include <stdio.h>

int main()
{

    char pokemon[152][50];
    char nome[50];
    int n;
    int elementos = -1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", nome);
        if (elementos == -1)
        {
            strcpy(pokemon[i], nome);
            elementos = 1;
            continue;
        }
        for (int i2 = 0; i2 < elementos; i2++)
        {
            if (!(strcmp(nome, pokemon[i2])))
            {
                break;
            }
            if (i2 == (elementos - 1))
            {
                strcpy(pokemon[i2 + 1], nome);
                elementos++;
            }
        }
    }
    printf("Falta(m) %d pomekon(s).\n", (151 - elementos));

    return 0;
}
