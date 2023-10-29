#include <stdio.h>

int main(){
    float a, b, c, lado1, lado2, lado3; //%lf a é o maior
    scanf("%f%f%f", &lado1, &lado2, &lado3);
    if ((lado1 >= lado2) && (lado1 >= lado3)){
        a = lado1;
        b = lado2;
        c = lado3;
    }
    else if ((lado2 >= lado1) && (lado2 >= lado3)){
            a = lado2;
            b = lado1;
            c = lado3;
    }
        else {
            a = lado3;
            b = lado1;
            c = lado2;
        }
    if (a < (b + c)){
        if ((a * a) == ((b * b) + (c * c))){
            printf("TRIANGULO RETANGULO\n");
        }
        else if ((a * a) > ((b * b) + (c * c))){
                printf("TRIANGULO OBTUSANGULO\n");
            }
             else {
                
                printf("TRIANGULO ACUTANGULO\n");
             }
    
        if ((a == b) && (a == c)){
            printf("TRIANGULO EQUILATERO\n");
        }
        else if (a == b || a == c || b == c){
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    else{
        printf("NAO FORMA TRIANGULO\n");
    }
    return 0;
} 