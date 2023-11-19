/*
2- Implemente um programa para manipular os dados dos usuários da biblioteca. Crie uma
estrutura contendo as variáveis: “nome”, “cpf”, “curso”
a. Crie uma lista para armazenar os dados. As funcionalidades que devem ser
implementadas são: criar lista, incluir usuário, excluir usuário, buscar (pelo CPF).
Conta o número de alunos de determinado curso. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct usuario{
    char curso[30];
    char cpf[15];
    char nome[30];
    struct usuario *prox;
}Usuario;

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

int main(){
    Usuario *lista = NULL;
    inserir(&lista, "joao lucas", "19199113", "computacao");
    inserir(&lista, "maria joaquina", "09349934", "matematica");
    inserir(&lista, "teclado junior", "12345678", "engenharia civil");
    inserir(&lista, "estudante dois", "50505050", "computacao");
    listar(&lista);
    printf("\n");
    retirar(&lista, "09349934");
    listar(&lista);
    printf("\n");
    buscar(&lista, "12345678");
    printf("\nEstudantes do curso de computacao: %d", contar(&lista, "computacao"));
    liberar(&lista);
    return 0;
} 