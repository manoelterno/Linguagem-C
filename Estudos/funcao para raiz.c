#include <stdio.h>
float raiz(int n) 
{
    float transicao, raiz; 
    raiz = n / 2;
    transicao = 0;
    while (raiz != transicao){ 
        printf("%f\n", raiz);
        transicao = raiz;
        raiz = ((n / raiz) + transicao) / 2;
    }
    return raiz;
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%f\n", raiz(n));
    return 0;
} 




