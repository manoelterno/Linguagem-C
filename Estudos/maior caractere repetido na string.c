#include <stdio.h>
#include <string.h>
void esvaziar(int *vezes)
{
    for (int i = 0; i < 26; i++)
    {
        vezes[i] = 0;
    }
}
int main(){
    char texto[50];
    char alfabeto[27] = "abcdefghijklmnopqrstuvwxyz";
    int vezes[27];
    int maior = 0;
    //para de executar quando o usuario digita apenas "0"
    while(scanf("%s", texto))
    {
        if(strlen(texto) == 1 && texto[0] == '0')
            break;
        esvaziar(vezes);
        for(unsigned int i = 0; i < strlen(texto); i++)
        {
            for(int i2 = 0; i2 < 26; i2++)
            {
                if(texto[i] == alfabeto[i2])
                    vezes[i2]++;
            }
        }
        for (int i = 0; i < 26; i++)
        {
            if (vezes[i] > maior)
                maior = vezes[i];
        }
        for (int i = 0; i < 26; i++)
        {
            if (vezes[i] == maior)
                printf("%c %d vezes ", alfabeto[i], vezes[i]);
        }
        maior = 0;
        printf("\n");
    }
    return 0;
} 





