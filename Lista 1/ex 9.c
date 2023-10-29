/*Antes de o racionamento de energia ser decretado, quase ninguém falava em
quilowatts; mas, agora, todos incorporaram essa palavra em seu vocabulário. Sabendose que 100 quilowatts de energia custa um sétimo do salário mínimo, fazer um
algoritmo que receba o valor do salário mínimo e a quantidade de quilowatts gasta por
uma residência e calcule (imprima). 
*/
#include <stdio.h>
int main(){ // 100 q = 1/7 min
    float q, s, r;
    scanf("%f%f", &s, &q);
    r = (q * (1/7)) / 100;
    s = s * r;
    printf("%.2f\n", s);
return 0;
}