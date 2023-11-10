/*4- Faça um programa que receba do usuário um arquivo que contenha o nome e a nota de
diversos alunos (da seguinte forma: NOME: JOAO NOTA: 8), um aluno por linha. Mostre na
tela o nome e a nota do aluno que possui a maior nota.
*/
/*
NOME: JOAO NOTA: 8
NOME: MARIA NOTA: 6
NOME: ENZO NOTA: 7
NOME: PEDRO NOTA: 9
NOME: GABRIEL NOTA: 6

saída: 
ALUNO COM MAIOR NOTA: PEDRO
MAIOR NOTA: 9
*/
#include <stdio.h>
#include <string.h>

int main()
{
    FILE *arquivo = fopen("notas.txt", "r");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir arquivo.");
        return 1;
    }
    char nome[20], nome_maior[20];
    int nota = 0, maior = 0;
    //while (!feof(arquivo))
    while (fscanf(arquivo, "NOME: %s NOTA: %d ", nome, &nota) != EOF)
    {
        if (nota > maior)
        {   
            strcpy(nome_maior, nome);
            maior = nota;
        }
    }
    
    printf("ALUNO COM MAIOR NOTA: %s\nMAIOR NOTA: %d", nome_maior, maior);
    fclose(arquivo);
    return 0;
}
