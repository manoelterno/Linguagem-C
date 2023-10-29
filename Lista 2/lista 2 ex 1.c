// 1- (String) Escreva um programa que mostre uma string na tela pela ordem em que está escrita e
// pela ordem contrária. DEVE usar apenas apontador para percorrer as strings
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char texto[50]; // max 50 caracteres
    char temporaria;
    gets(texto);    // entrada
    printf("%s\n", texto);
    char *ptr = texto; // ponteiro
    int tamanho = strlen(texto);
    int final = tamanho - 1;
    for (int i3 = 0; i3 < final; i3++)
    {
        // inverter a string usando o ponteiro ptr
        char temporaria = ptr[i3];
        ptr[i3] = ptr[final];
        ptr[final] = temporaria;
        final--;
    }
    printf("%s\n", texto);
    return 0;
}
