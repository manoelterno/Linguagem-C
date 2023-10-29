/*Uma P.A. (progressão aritmética) fica determinada pela sua razão (r) e pelo primeiro
termo (a1). Escreva um programa que seja capaz de determinar qualquer termo de uma
P.A., dado a razão e o primeiro termo. 

*/

// EXERCICIO 1
#include <stdio.h>
int main(){
//an = a1 + (n - 1) * r
int a1, r, an, n;
a1 = 1;
r = 2;
scanf("%d", &n);
an =  a1 + (n - 1) * r;
printf("%d\n", an);
return 0;
}