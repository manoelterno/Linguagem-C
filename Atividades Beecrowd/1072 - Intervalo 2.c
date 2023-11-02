#include <stdio.h>

int main(){
    int tam, dentro = 0, fora = 0;
    scanf("%d",&tam);
    int vetor[tam];
    for (int i = 0; i < tam; i++){
        scanf("%d", &vetor[i]);
        if ((vetor[i] >= 10) && (vetor[i] <= 20))
            dentro++;
        else
            fora++;
    }
    printf("%d in\n%d out\n", dentro, fora);
    return 0;
}
