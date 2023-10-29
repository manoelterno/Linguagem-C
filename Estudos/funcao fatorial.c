#include <stdio.h>
long long int fat(long long int n)
{
    if (n <= 0)
        return 1;
    long long r = 1;
    for (int i = 1; i <= n; i++)
    {
        r = r * i;
    }
    return r;
}

int main(){
    for(long long int i = 1; i <= 20; i++){
        printf("%lld\n", fat(i));
    }
    return 0;
} 




