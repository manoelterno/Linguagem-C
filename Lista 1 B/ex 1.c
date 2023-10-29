/*Faça um programa que calcule e escreva o valor de S. O usuário irá informar até
qual valor será calculado (N), neste caso foi até o número 38 (N de entrada menor
ou igual a 50). 
*/

// EXERCICIO 1
#include <stdio.h>
int main(){
    int n, a1, a2, soma;
    scanf("%d", &n);
    a1 = n;
    a2 = n - 1;
    for (int i = 1; i < n; i++)
    {
        soma = soma + ((a1 * a2)/i);
        a1--;
        a2--;
    }
    printf("%d\n", soma);
return 0;
}