#include <stdio.h>
int main(){
    int m, n, mdc = 1;
    scanf("%d%d", &m, &n);
    if(n != 0)
        m = m % n;
    else{
        printf("%d", m);
        return 0;
    }
    for (int i = 1; i < n; i++){
        if (((m % i) == 0) && ((n % i) == 0)){
            mdc = i;
        }
    }
    printf("%d\n", mdc);
    return 0;
} 



