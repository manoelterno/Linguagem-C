/*5- Crie um programa que receba como entrada o número de alunos de uma disciplina.
Aloque dinamicamente dois vetores para armazenar as informações a respeito desses
alunos. O primeiro vetor contém o nome dos alunos e o segundo contém suas notas finais.
Crie um arquivo que armazene, a cada linha, o nome do aluno e sua nota final. Use nomes
com no máximo 40 caracteres. Se o nome não contém 40 caracteres, complete com espaço
em branco. */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void preencher(char *nome)
{
    for(int i = strlen(nome); i < 40; i++)
    {
        nome[i] = ' ';
    }
    nome[40] = '\0';
}
int main()
{
    int quant;
    float *vetor_notas;
    char **vetor_nomes;
    FILE *arquivo = fopen("notas.txt", "w");
    printf("Quantidade de casas no vetor: ");
    scanf("%d ", &quant);
    vetor_notas = malloc(quant * sizeof(float));
    vetor_nomes = malloc(quant * sizeof(char));
    for(int i = 0; i < quant; i++)
    {
        vetor_nomes[i] = malloc(sizeof(char) * 41);
    }
    for (int i = 0; i < quant; i++)
    {   
        gets(vetor_nomes[i]);
    	scanf("%f", &vetor_notas[i]);
        getchar();
        preencher(vetor_nomes[i]);
        fprintf(arquivo, "NOME: %s NOTA: %.2f\n", vetor_nomes[i], vetor_notas[i]);
    }
    fclose(arquivo);
    free(vetor_notas);
    free(vetor_nomes); 
    return 0;
}
