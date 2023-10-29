/* 5 - Apresente um esquema recursivo para dividir dois números inteiros usando contagens
sucessivas. Por exemplo: calcular A/B sendo A=18 e B=4. Sabemos que dividir A por B é o
mesmo que descobrir quantas vezes B cabe em A. Assim, para dividir 18 por 4 podemos contar
o no. de vezes que 4 cabe dentro de 18. 
*/
#include <stdio.h>

int dividir(int m, int n)
{
    // m é maior uqe n
    int soma = 0;
    if (m - n >= 0)
    {
        soma = 1;
        soma = soma + dividir(m - n, n);
        return soma;
    }
    else
        return 0;
    return soma;
}
int main(){
    int m, n;
    scanf("%d%d", &m, &n); // m tem que ser maior q n
    printf("%d", dividir(m, n));
    return 0;
} 




