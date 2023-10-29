#include <stdio.h>
double media(double vet[], int tam)
{
    double soma = 0;
    for(int i = 0; i < tam; i++)
    {
        soma = soma + vet[i];
    }
    return (soma / tam);
}
int main()
{
    double vet[5] = {8.2, 7.8, 10, 9.5, 6.7};
    printf("%.2f\n", media(vet, 5));
    return 0;
}