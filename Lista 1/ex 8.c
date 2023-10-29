/*Criar um algoritmo que efetue o cálculo da quantidade de litros de combustível gastos
em uma viagem, sabendo-se que o carro faz 12 km com um litro. Deverão ser
fornecidos o tempo gasto na viagem e a velocidade média.
Distância = Tempo x Velocidade. Litros = Distancia / 12.
O algoritmo deverá apresentar os valores da Distância percorrida e a quantidade de
Litros utilizados na viagem. 
*/
#include <stdio.h>
int main(){
    float t, v, d, l;
    scanf("%f%f", &t, &v);
    d = t * v;
    l = d / 12;
    printf("%.2f\n", l);
return 0;
}