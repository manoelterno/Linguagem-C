#include <stdio.h>
int main(){
    float a, b;
    float pesoA = 3.5;
    float pesoB = 7.5;
    scanf("%f%f", &a, &b);
    float x = (a * pesoA + b * pesoB) / (pesoA + pesoB);
    printf("MEDIA = %.5f\n", x);
    return 0;
} 