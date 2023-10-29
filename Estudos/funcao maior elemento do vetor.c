#include <stdio.h>

int maiorValor(int vet[], int tam)
{
    int maior = vet[0];
    for(int i = 1; i < tam; i++){
        if ( vet[i] > maior)
            maior = vet[i];
    }
    return maior;
}
int main()
{
    int vet[4] = {1, 4, 5 , 6};
    int  tam = 4;
    printf("%d", maiorValor(vet, tam));
    return 0;
}
