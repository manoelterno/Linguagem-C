/*2- Implemente uma lista dinâmica de números positivos em que os números ímpares fiquem
todos juntos no início da lista e os pares fiquem todos juntos no final da lista
a. Defina o novo tipo LISTA que suporte esta definição
b. Implementa a função INIC que permite fazer a carga inicial da lista
c. Implemente a função INSERIR que coloca na lista o inteiro positivo enviado à função.
d. Implemente a função RETIRAR que retira da lista a primeira ocorrência de um
determinado valor
e. Implemente a função LISTAR, que coloca na tela todos os elementos existentes. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct numero
{
    int valor;
    struct numero *prox;
} Numero;

void liberar(Numero **lista)
{
    Numero *atual = *lista;
    while (atual != NULL)
    {
        Numero *prox = atual->prox;
        free(atual);
        atual = prox;
    }
}

void inserir(Numero **lista, int d)
{
    Numero *novo_numero = malloc(sizeof(Numero));
    if (d % 2 == 0)
    {
        Numero *atual;
        atual = *lista;
        Numero *anterior = NULL;
        if (*lista == NULL)
        {
            novo_numero->valor = d;
            novo_numero->prox = *lista;
            *lista = novo_numero;
        }
        else
        {
            while (1)
            {
                anterior = atual;
                atual = atual->prox;
                if (atual == NULL)
                {
                    novo_numero->valor = d;
                    novo_numero->prox = NULL;
                    anterior->prox = novo_numero;
                    break;
                }
            }
        }
    }
    else
    {
        novo_numero->valor = d;
        novo_numero->prox = *lista;
        *lista = novo_numero;
    }
}

void listar(Numero **lista)
{
    if (*lista == NULL)
    {
        printf("Lista vazia\n");
    }
    Numero *atual;
    atual = *lista;
    while (atual != NULL)
    {
        printf("%d\n", atual->valor);
        atual = atual->prox;
    }
}

void retirar(Numero **lista, int d)
{
    Numero *atual;
    atual = *lista;
    Numero *anterior = NULL;
    while (atual != NULL)
    {
        if (atual->valor == d)
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

int main()
{
    Numero *lista = NULL;
    inserir(&lista, 2);
    inserir(&lista, 5);
    inserir(&lista, 4);
    inserir(&lista, 7);
    inserir(&lista, 6);
    inserir(&lista, 9);
    listar(&lista);
    printf("\n\n");
    retirar(&lista, 4);
    listar(&lista);
    liberar(&lista);
    return 0;
}