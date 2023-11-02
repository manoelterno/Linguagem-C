#include <stdio.h>

int main() {
    int x, y, t, soma = 0;
    scanf("%d%d", &x, &y);
    if (y > x){
        t = x;
        x = y;
        y = t;
    }
    for (int i = y; i <= x; i++){
        if ((i % 13) != 0){
            soma = soma + i;
        }
    }
    printf("%d\n", soma);
    return 0;
}
