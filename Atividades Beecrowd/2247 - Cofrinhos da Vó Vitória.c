#include <stdio.h>

int main(){
    int n, a, b, i, diff, contador = 1;
    scanf("%i", &n); // 3
    while (n != 0){
        diff = 0;
        printf("Teste %d\n", contador);
        for (i = 0; i < n; i++){                           // vai executar 3 vezes
            scanf("%i %i", &a, &b); // 20 e 25
            diff += a - b;          // -5
            printf("%i\n", diff);
        }
        printf("\n");
        scanf("%i", &n);
        contador++;
    }
    return 0;
}