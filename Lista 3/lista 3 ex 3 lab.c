/*3- Agora vamos trabalhar com arquivos:
a. Implemente um procedimento que grave os dados da lista em um arquivo binário.
b. Implemente outro procedimento para exibir os nomes dos usuários armazenados no
arquivo.
c. Implementa outro procedimento que conte o número de alunos do curso
Engenharia de Computação.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct usuario
{
    char curso[30];
    char cpf[15];
    char nome[30];
    struct usuario *prox;
} Usuario;

void liberar(Usuario **lista)
{
    Usuario *atual = *lista;
    while (atual != NULL)
    {
        Usuario *prox = atual->prox;
        free(atual);
        atual = prox;
    }
}

void listar(Usuario **lista)
{
    if (*lista == NULL)
    {
        printf("Lista vazia\n");
    }
    Usuario *atual;
    atual = *lista;
    while (atual != NULL)
    {
        printf("%s;%s;%s\n", atual->nome, atual->cpf, atual->curso);
        atual = atual->prox;
    }
}

void inserir(Usuario **lista, char *nome, char *cpf, char *curso)
{
    Usuario *novo_usuario = malloc(sizeof(Usuario));
    strcpy(novo_usuario->nome, nome);
    strcpy(novo_usuario->curso, curso);
    strcpy(novo_usuario->cpf, cpf);
    novo_usuario->prox = *lista;
    *lista = novo_usuario;
}

void retirar(Usuario **lista, char *cpf)
{
    Usuario *atual;
    atual = *lista;
    Usuario *anterior = NULL;
    while (atual != NULL)
    {
        if (!strcmp(atual->cpf, cpf))
            break;
        anterior = atual;
        atual = atual->prox;
    }
    if (anterior == NULL)
        *lista = atual->prox;
    else
        anterior->prox = atual->prox;
    free(atual);
}

void buscar(Usuario **lista, char *cpf)
{
    Usuario *atual;
    atual = *lista;
    while (atual != NULL)
    {
        if (!strcmp(atual->cpf, cpf))
            break;
        atual = atual->prox;
    }
    printf("%s;%s;%s\n", atual->nome, atual->cpf, atual->curso);
}

int contar(Usuario **lista, char *curso)
{
    int contador = 0;
    Usuario *atual;
    atual = *lista;
    while (atual != NULL)
    {
        if (!strcmp(atual->curso, curso))
            contador++;
        atual = atual->prox;
    }
    return contador;
}

int main()
{
    Usuario *lista = NULL;
    inserir(&lista, "joao lucas", "19199113", "computacao");
    inserir(&lista, "maria joaquina", "09349934", "matematica");
    inserir(&lista, "teclado junior", "12345678", "engenharia civil");
    inserir(&lista, "estudante dois", "50505050", "computacao");

    FILE *arquivo = fopen("estudantes.bin", "wb");
    Usuario *atual;
    atual = lista;
    while (atual != NULL)
    {
        fprintf(arquivo, "%s;%s;%s\n", atual->nome, atual->cpf, atual->curso);
        atual = atual->prox;
    }
    char texto[100];
    fclose(arquivo);
    arquivo = fopen("estudantes.bin", "rb");
    while (fgets(texto, 100, arquivo))
    {
        printf("%s", texto);
    }
    printf("\nEstudantes do curso de computacao: %d", contar(&lista, "computacao"));
    printf("\nEstudantes do curso de matematica: %d", contar(&lista, "matematica"));
    printf("\nEstudantes do curso de engenharia civil: %d", contar(&lista, "engenharia civil"));
    liberar(&lista);
    return 0;
}