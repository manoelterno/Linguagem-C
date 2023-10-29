/*Considere que o número de uma placa de veículo é composto por quatro algarismos.
Construa um algoritmo que leia este número e apresente o algarismo correspondente à
casa das dezenas. 
*/
#include <stdio.h>
int main(){
    int m, c, d, u;
    scanf("%d%d%d%d", &m, &c, &d, &u);
    d = d * 10;
    printf("%d", d);
return 0;
}