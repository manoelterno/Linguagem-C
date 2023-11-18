/*1-  Elabore um programa que solicita ao usuário uma sequência de caracteres e os armazena
em um vetor alocado dinamicamente. Em seguida, realize a cópia dos caracteres para um
outro vetor alocado dinamicamente em que são excluídos os espaços. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    // max 30 caracteres
    char *vetor_1 = malloc(30 * sizeof(char));
    char *vetor_2 = malloc(30 * sizeof(char));
    gets(vetor_1);
    int i2 = 0;
    int tam = 0;
    for (unsigned int i = 0; i < strlen(vetor_1); i++)
    {
        if (vetor_1[i] == ' '){
            continue;
            tam--;
        }
        vetor_2[i2] = vetor_1[i];
        i2++;
        tam++;
    }
    vetor_2[tam] = '\0';
    printf("%s\n", vetor_1);
    printf("%s\n", vetor_2);
    free(vetor_1);
    free(vetor_2);
    return 0;
} 




