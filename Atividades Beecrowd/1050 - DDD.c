#include <stdio.h>
#include <stdlib.h>
int main(){
    int a;
    const char *cidades[] = {"Brasilia","Salvador","Sao Paulo","Rio de Janeiro", "Juiz de Fora", "Campinas", "Vitoria", "Belo Horizonte"};
    int ddd[] = {61, 71, 11, 21, 32, 19, 27, 31};
    scanf("%d", &a);
    for(int i = 0; i <= 7; i++){
        if (a == ddd[i]){
            printf("%s\n", cidades[i]);
            exit(0);
        }
    }
    printf("DDD nao cadastrado\n");
    return 0;
} 
