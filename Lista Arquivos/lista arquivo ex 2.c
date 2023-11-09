/* 2 - Faça um programa que receba do usuário um arquivo texto e mostre na tela quantas
linhas esse arquivo possui. 

*/ 
#include <stdio.h>

int main() {
    char nome_arq[50];
    // nome ou diretorio do arquivo
    gets(nome_arq); // arq.txt
    FILE* arquivo = fopen(nome_arq, "r");
    char caractere; 
    int contador = 0;
    if(arquivo == NULL) {
        printf("Erro ao abrir arquivo.");
        return 1;
    }
    while(fscanf(arquivo, "%c", &caractere) != EOF)
    {
        if(caractere == '\n')
            contador++;
    }
    printf("linhas no arquivo: %d\n", contador);
    fclose(arquivo);
    return 0;
}
