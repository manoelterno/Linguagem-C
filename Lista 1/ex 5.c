/*Escreva um algoritmo que leia dois números reais e imprima a média aritmética entre
esses dois valores com a seguinte mensagem “MEDIA” antes do resultado. 
*/
#include <stdio.h>
int main(){
    int a, b, m;
    scanf("%d%d", &a, &b);
    m = (a + b)/2;
    printf("MEDIA %d", m);
return 0;
}