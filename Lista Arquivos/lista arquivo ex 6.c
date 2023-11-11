/*6- Crie uma estrutura Aluno contendo matrícula (int), frequência (float) e nota (float). Em
seguida, crie um programa que lê os dados de n alunos e escreve estes dados em um
arquivo binário. Exemplo de entrada: */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    int matricula;   
    float frequencia;    
    float nota; 
} Aluno; 

int main()
{
    FILE *arquivo = fopen("alunos.bin", "wb");
    int quant;
    printf("Quantidade de alunos:\n");
    scanf("%d", &quant);
    Aluno turma[quant];
    printf("Digite a matricula, frequencia e nota de cada aluno:\n");
    for (int i = 0; i < quant; i++)
    {   
        scanf("%d%f%f", &turma[i].matricula, &turma[i].frequencia, &turma[i].nota);
        fprintf(arquivo, "%04d %.2f %.2f\n", turma[i].matricula, turma[i].frequencia, turma[i].nota);
    }
    fclose(arquivo);
    return 0;
}
