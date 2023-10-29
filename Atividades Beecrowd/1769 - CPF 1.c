#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int verificar_b1(int *cpf)
{
    int mult = 1;
    int soma = 0;
    for (int i = 0; i < 9; i++)
    {
        soma = soma + (cpf[i] * mult);
        mult++;
    }
    if ((soma % 11) == cpf[9] || (soma % 11 == 10 && cpf[9] == 0)) //  O dígito b1 será o resto da divisão (ou 0, caso o resto seja 10).
        return 1;

    return 0;
}
int verificar_b2(int *cpf)
{
    int mult = 9;
    int soma = 0;
    for (int i = 0; i < 9; i++)
    {
        soma = soma + (cpf[i] * mult);
        mult--;
    }
    if ((soma % 11) == cpf[10] || (soma % 11 == 10 && cpf[10] == 0)) //  O dígito b1 será o resto da divisão (ou 0, caso o resto seja 10).
        return 1;

    return 0;
}
/*  essa função nao precisa ser usada:

int verificar_digitos(int *cpf)
{
    int soma = 0;
    for(int i = 0; i < 11; i++)
    {
        soma = soma + cpf[i];
    }
    if (soma % 11 == 0)
    {
        return 1;
    }
    return 0;
}
*/
void inicializar(int *num, int *cpf)
{
    int i2 = 0;
    for (int i = 0; i < 3; i++)
    {
        cpf[i2] = num[i] / 100;
        i2++;
        num[i] = num[i] % 100;
        cpf[i2] = num[i] / 10;
        i2++;
        num[i] = num[i] % 10;
        cpf[i2] = num[i];
        i2++;
    }
    cpf[9] = num[3] / 10;
    cpf[10] = num[3] % 10;
}
int main()
{
    int num[4], cpf[11];
    while (scanf("%d.%d.%d-%d", &num[0], &num[1], &num[2], &num[3]) != EOF)
    {
        inicializar(num, cpf);
        //if(verificar_digitos(cpf))
        if (verificar_b1(cpf))
            if (verificar_b2(cpf))
            {
                printf("CPF valido\n");
                continue;
            }
        printf("CPF invalido\n");
    }
    return 0;
}
