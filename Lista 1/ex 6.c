/*Escreva um algoritmo que leia uma temperatura em graus centígrados e apresente a
temperatura convertida em graus Fahrenheit. A fórmula de conversão é:

onde F é a temperatura em Fahrenheit e C é a temperatura em centígrados*/
#include <stdio.h>
int main(){
    float c, f;
    scanf("%f", &c);
    f = ((9 * c)/5) + 32;
    printf("%.2f\n", f);
return 0;
}