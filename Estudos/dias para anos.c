#include <stdio.h>
void here(double n)
{
 fprintf(stderr, "here: %g\n", n);
}
int main(){
    int dias, meses, anos;
    scanf("%d", &dias); 
    here(dias);
    anos = dias / 365; 
    meses = ((dias % 365) / 30); 
    here(meses);
    dias = (dias % 365) % 30;
    here(anos);
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, meses, dias);

    return 0;
} 