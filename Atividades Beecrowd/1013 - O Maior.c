#include <stdio.h>
int main(){
    int a, b, c, maior;
    scanf("%d%d%d", &a, &b, &c);
    if (a > b)
        maior = a;
    else
        maior = b;
    if (maior > c)
        printf("%d eh o maior\n", maior);
    else
        printf("%d eh o maior\n", c);
    return 0;
} 