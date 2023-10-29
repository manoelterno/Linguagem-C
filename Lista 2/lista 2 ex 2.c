// 2- (String) Escreva um programa que muda a ordem da primeira e da última palavra de uma frase
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char texto[50]; // max 50 caracteres
    gets(texto);    // entrada
    char palavra_1[20], palavra_2[50]; // max 10 caracteres
    int tamanho = strlen(texto), tamanhop1;
    int inicio; // inicio da ultima palavra
    // pegar primeira palavra
    for (int i = 0; i <= tamanho; i++)
    {
        if(texto[i] != ' ')
            palavra_1[i] = texto[i];
        else
        {
            palavra_1[i] = '\0';
            break;
        }
    }
    // calcular onde comeca a ultima palavra
    for (int i = tamanho; i > 0; i--)
    {
        if(texto[i] == ' ')
        {
            inicio = i + 1;
            break;
        }   
    }
    int i4 = 0;
    // pegar ultima palavra
    for (int i = inicio; i <= tamanho; i++) // menor ou igual pq o strlen nao inclui o \0 no calculo e strlen conta os numeros de caracteres, nao posicoes 
    {
        
        if(texto[i] != '\0')
        {
            palavra_2[i4] = texto[i];
        }
        else
        {
            palavra_2[i4] = '\0';
            break;
        }
        i4++;
    }
    // strlen tamanho 1 e 2 
    tamanhop1 = strlen(palavra_1);
    printf("%s", palavra_2);
    for (int i = tamanhop1; i < inicio; i++)
    {
        printf("%c", texto[i]);
    }
    printf("%s\n", palavra_1);
    return 0;
}
