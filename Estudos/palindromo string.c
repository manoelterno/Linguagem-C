#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    // acentos e espaços em brancos são descartados
    // digitar saudavellevaduas resulta em palindromo
    char texto[51], inverso[51], trans;
    int tamanho, final;
    gets(texto);    
    tamanho = strlen(texto);
    final = tamanho - 1;
    strcpy(inverso, texto);
    for (int i = 0; i < tamanho/2; i++)
    {
        trans = inverso[i];
        inverso[i] = inverso[final];
        inverso[final] = trans;
        final--;
    }
    if(!strcmp(inverso, texto))
        printf("Palindromo");
    else
        printf("Nao Palindromo");
    return 0;
} 




