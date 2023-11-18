/* 1- Implemente um programa que conta quantas vezes um determinado caractere aparece em
um arquivo texto.
Teste seu programa com o seguinte arquivo (gere este arquivo “manualmente”):
abc abcd ab c bcdef hiabj 
*/ 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void esvaziar(int *vezes)
{
    for (int i = 0; i < 26; i++)
    {
        vezes[i] = 0;
    }
}
int main() {
    
    FILE* arquivo = fopen("texto.txt", "r");
    // max 50 caracteres
    char texto[50]; 
    char alfabeto[27] = "abcdefghijklmnopqrstuvwxyz";
    int vezes[27];
    if(arquivo == NULL) {
        printf("Erro ao abrir arquivo.");
        return 1;
    }
    while(fgets(texto, 50, arquivo) != NULL)
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
            if (vezes[i] != 0)
                printf("%c %d vezes ", alfabeto[i], vezes[i]);
        }
    fclose(arquivo);
    return 0;
}
