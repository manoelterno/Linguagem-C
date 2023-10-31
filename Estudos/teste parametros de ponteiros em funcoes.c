#include <stdio.h>
#include <string.h>
void ahtarr(int *contador)
{
    *contador = *contador + 10;
}
int main(){
   
   int cont = 0;
   ahtarr(&cont);
   printf("%d\n", cont);
   ahtarr(&cont);
   printf("%d\n", cont);
   ahtarr(&cont);
   printf("%d\n", cont);
   // imprime 10 20 30
    return 0;
} 




