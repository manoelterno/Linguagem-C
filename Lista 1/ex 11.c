/*Faça um algoritmo que calcule a soma dos números ímpares entre 1 e um limite
superior definido pelo usuário.*/
#include <stdio.h>
int main(){
    int n, soma = 0;
    scanf("%d", &n);
    for (int i = 1; i < n; i++){
        if((i % 2 )!= 0)
        {
            soma = soma + i;
        }
    }
    printf("%d\n", soma);
return 0;
}