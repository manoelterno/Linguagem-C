#include <stdio.h>

int main(){
    int tam;
    int c = 0, r = 0, s = 0;
    float c2, r2, s2;
    int total;
    char tipo;
    scanf("%d",&tam);
    int vetor[tam];
    for (int i = 0; i < tam; i++){
        scanf("%d %c", &vetor[i], &tipo);
        switch(tipo)
        {
            case 'R': r = r + vetor[i]; break;
            case 'C': c = c + vetor[i]; break;
            case 'S': s = s + vetor[i]; break;
        }
    }
    c2 = c;
    r2 = r;
    s2 = s;
    total = r + c + s;
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", c);
    printf("Total de ratos: %d\n", r);
    printf("Total de sapos: %d\n", s);
    printf("Percentual de coelhos: %.2f %%\n", (c2 * 100)/total);
    printf("Percentual de ratos: %.2f %%\n", (r2 * 100)/total);
    printf("Percentual de sapos: %.2f %%\n", (s2 * 100)/total);

    return 0;
}
