#include <stdio.h>

int main() {

    int x, y, w, soma = 0;
    scanf("%d%d", &x, &y);
    if (x <= y){
        w = x;
        x = y;
        y = w;
    }
    for (int i = y + 1; i < x; i++ ){
        if ((i % 2) != 0)
        {
            soma = soma + i;
        }
    }
    printf("%d\n", soma);

    return 0;
}
