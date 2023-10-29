#include <stdio.h>
int main(){
    int n, digito; 
    printf("Digite um numero:\n");
    scanf("%d", &n);
    int cont = 1; // armazena as potencias de 10
    int acu = 0;  // acumula os valores resultantes (resultado final)
    int ver = 0; // verifica se é o primeiro numero
    while (n != 0){
        digito = n % 2;
        n = n / 2;
        if (ver == 0)
        {
            acu = digito;
        }
        else if (digito == 1){
            acu = acu + cont;
        }
        cont = cont * 10;
        ver++;
    }
    printf("%d\n", acu);
    return 0;
} 



