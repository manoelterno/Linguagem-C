#include <stdio.h>
int main(){
    printf("int = %d\n", sizeof(int));  // 4
    printf("char = %d\n", sizeof(char)); // 1
    printf("float = %d\n", sizeof(float)); // 4
    printf("double = %d\n", sizeof(double)); //8
    short int a;
    a = 33000; // se 33000 = erro e mostra -32536 // se  32765, por exemplo, vai mostrar 32765 corretamente
    printf("%d\ntamanho do signed short int: %d\n", a, sizeof(a)); // size = 2
    unsigned short int b;
    b = 33000;
    printf("%d\ntamanho do unsigned short int: %d\n", b, sizeof(b)); // size = 2 // quando unsigned, o tamanho maximo possivel dos numeros positivos aumenta
    double c;
    float d;
    c = 1;
    d = 1;
    printf("%f\n%f\n", c, d);
    return 0;
}