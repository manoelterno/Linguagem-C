/*3- Faça um programa que receba do usuário um arquivo texto. Crie outro arquivo texto
contendo o texto do arquivo de entrada, mas com as vogais substituídas por ‘*’. 
*/ 
#include <stdio.h>
#include <string.h>
int main() {
    char nome_arq[50];
    // nome ou diretorio do arquivo
    gets(nome_arq); // arq.txt
    FILE* arquivo = fopen(nome_arq, "r");
    char texto[50];
    if(arquivo == NULL) {
        printf("Erro ao abrir arquivo.");
        return 1;
    }

    while(fgets(texto, 50, arquivo) != NULL)
    fclose(arquivo);
    printf("%s\n", texto);
    for(unsigned int i = 0; i < strlen(texto); i++)
    {
        if(texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u')
            texto[i] = '*';
    }
    arquivo = fopen("arq2.txt", "w");
    fprintf(arquivo, "%s", texto);
    fclose(arquivo);
    return 0;
}
