/*7 - Crie um programa que lê as n estruturas gravadas (no exercício anterior) de um arquivo
binário.  */
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
    FILE *arquivo = fopen("alunos.bin", "rb");
    int quant;
    printf("Quantidade de alunos:\n");
    scanf("%d", &quant);
    Aluno turma[quant];
    for (int i = 0; i < quant; i++)
    {   
        fscanf(arquivo, "%d %f %f\n", &turma[i].matricula, &turma[i].frequencia, &turma[i].nota);
        printf("%04d %.2f %.2f\n", turma[i].matricula, turma[i].frequencia, turma[i].nota);
    }
    fclose(arquivo);
    return 0;
}
