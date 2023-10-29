#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{

    char texto[51];
    char resul[51];
    int tamanho = 0;
    while(gets(texto) != NULL){
    int ordem = 1;

    while(texto[tamanho])
    {
        texto[tamanho++];
    }
    for (int i = 0; i <= tamanho; i++)
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
