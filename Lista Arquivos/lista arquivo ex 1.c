/* 1- Escreva um programa que:
(a) Crie/abra um arquivo texto de nome “arq.txt”
(b) Permita que o usuário grave diversos caracteres nesse arquivo, até que o usuário entre
com o caractere ‘0’.
(c) Feche o arquivo 
*/ 
#include <stdio.h>

int main() {
    FILE* arquivo = fopen("arq.txt", "w");
    char caractere; 
    if(arquivo == NULL) {
        printf("Erro ao criar arq.txt.");
        return 1;
    }
    // um caractere de cada vez
    while(scanf("%c", &caractere) && caractere != '0')
    {
        getchar();
        fprintf(arquivo, "%c", caractere);
    }
    fclose(arquivo);
    arquivo = fopen("arq.txt", "r");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir arq.txt.");
        return 1;
    }
    while(fscanf(arquivo, "%c", &caractere) != EOF)
        printf("%c", caractere);
    printf("\n");
    return 0;
}
