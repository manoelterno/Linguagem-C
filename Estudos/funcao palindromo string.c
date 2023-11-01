#include <stdio.h>
#include <string.h>
// funcao para verificar se uma string é um palindromo, se movendo por ponteiros e descartando espaços em brancos (' ')
int palindromo(char *texto)
{
    int final = strlen(texto) - 1;
    for(unsigned int i = 0; i < strlen(texto)/2; i++)
    {
        if(*(texto + i) == ' ')
            continue;
        if(*(texto + final) == ' ')
            final--;
        if (*(texto + i) != *(texto + final))
            return 0;
        final--;
    }
    return 1;
}
int main()
{
    char texto[50];
    gets(texto);
    printf("%d\n", palindromo(texto));
    return 0;
} 




