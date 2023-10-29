/*Escreva um algoritmo que leia um número inteiro e imprima o seu sucessor e seu
antecessor. 

*/

#include <stdio.h>
int main(){
int n;
scanf("%d", &n);
printf("%d\n%d\n", n - 1, n + 1);
return 0;
}