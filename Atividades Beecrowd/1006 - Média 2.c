#include <stdio.h>
int main(){
    float a, b, c;
    float pesoA = 2;
    float pesoB = 3;
    float pesoC = 5;
    scanf("%f%f%f", &a, &b, &c);
    float x = (a * pesoA + b * pesoB + c * pesoC) / (pesoA + pesoB + pesoC);
    printf("MEDIA = %.1f\n", x);
    return 0;
} 