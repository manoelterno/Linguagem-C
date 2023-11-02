#include <stdio.h>

int main() {
    int a, n;
    scanf("%d", &n);
    int v[n];
    for (int i = 0; i < n; i++){
        int nao = 0;
        scanf("%d", &v[i]);
        for (int i2 = 2; i2 < v[i]; i2++){
            if ((v[i] % i2) == 0){
                nao = 1;
            }
        }
        if (nao == 1)
            printf("%d nao eh primo\n", v[i]);
        else
            printf("%d eh primo\n", v[i]);
    }

}
