#include <stdio.h>
int contador;
int fib(int n)
{
    contador++;
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }
    return fib(n - 1) + fib(n - 2); 
}

int main(){
    int n, num;
    contador = 0;
    int resul;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        printf("fib(%d) = ", num);
        num++;
        resul = fib(num);
        printf("%d calls = %d\n", resul, contador - 1);
        contador = 0;
    }
    
    
    return 0;
} 




