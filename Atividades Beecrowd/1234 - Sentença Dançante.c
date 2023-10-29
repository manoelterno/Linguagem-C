#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{

    char texto[51];
    char resul[51];

    while(gets(texto) != NULL){
    int ordem = 1; // 1 = o ultimo caractere era minusculo, 0 = o ultimo caractere era maiusculo

    for (unsigned int i = 0; i <= strlen(texto); i++)
    {

        if(texto[i] == ' ')
        {
            resul[i] = texto[i];
            continue;
        }
        if(ordem)
        {
            resul[i] = toupper(texto[i]);
            ordem = 0;
            continue;
        }
        else
        {
            resul[i] = tolower(texto[i]);
            ordem = 1;
            continue;
        }

    }
    printf("%s\n", resul);

    }
    return 0;
}
