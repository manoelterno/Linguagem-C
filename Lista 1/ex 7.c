/*Criar um algoritmo que leia dois valores para as variáveis A e B, que efetue a troca
dos valores de forma que a variável A passe a ter o valor da variável B e que a variável
B passe a ter o valor da variável A. Apresente os valores trocados. */

#include <stdio.h>
int main(){
    int a, b, t;
    scanf("%d%d", &a, &b);
    t = a; a = b; b = t;
    printf("A = %d\nB = %d\n", a, b);
return 0;
}