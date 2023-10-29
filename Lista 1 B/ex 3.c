/*Faça um programa que leia o número de termos e um valor positivo para x, calcule
e mostre o valor da série a seguir: 
*/

#include <stdio.h>

int fat(int n){
    int r = 1;
    for (int i = 1; i <= n; i++){
        r = r * i;
    }
    return r;
}

int main(){
    int n, n2, v, p_ou_n = 1, soma = 0, resul; // 1 = neg 0 = pos
    scanf("%d%d", &n, &v); 
    n2 = n * n;
    int fato = 1;
    for(int i = 0; i < v; i++)
    {
        resul = (n2) / (fat(fato));
        if (fato != 3)
            fato++;
        else
            fato = 1;
        if (p_ou_n == 1){
            soma = soma - resul;
            p_ou_n = 0;
        }
        else{
            soma = soma + resul;
            p_ou_n = 1;
        }
        n2 = n2 * n;
    }
    printf("%d\n", soma);
return 0;
}