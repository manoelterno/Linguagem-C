#include <stdio.h>
#include <ctype.h>
#include <string.h>
void acharC(char c, char caracteres[8][4], char ultimo, int verificar)
{
    int v = 0, linha, coluna;
    for (int i = 0; i < 8; i++)
    {
        for (int i2 = 0; i2 < 4; i2++)
        {
            if (caracteres[i][i2] == c)
            {
                linha = i;
                coluna = i2;
                v = 1;
                break;
            }
        }
        if (v)
            break;
    }
    if((caracteres[linha][0] == ultimo || caracteres[linha][1] == ultimo || caracteres[linha][2] == ultimo || caracteres[linha][3] == ultimo) && !verificar)
    {
        printf("*");
    }
    linha = linha + 2;
    coluna = coluna + 1;
    for (int i3 = 0; i3 < coluna; i3++)
    {
        printf("%d", linha);
    }

}
int main()
{

    int n, tamanho, verificar;
    char caracteres[8][4] = {{'a', 'b', 'c'}, {'d', 'e', 'f'}, {'g', 'h', 'i'}, {'j', 'k', 'l'}, {'m', 'n', 'o'}, {'p', 'q', 'r', 's'}, {'t', 'u', 'v'}, {'w', 'x', 'y', 'z'}};
    char texto[141];
    char ultimo = '\0';
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        gets(texto);
        tamanho = strlen(texto); // tamanho da string
        for (int i2 = 0; i2 < tamanho; i2++)
        {
            if(texto[i2] == ' ')
            {
                ultimo = texto[i2];
                printf("0");
                continue;
            }
            if (isupper(texto[i2]))
            {
                verificar = 1;
                printf("#");
                texto[i2] = tolower(texto[i2]);
            }
            acharC(texto[i2], caracteres, ultimo, verificar);
            ultimo = texto[i2];
            verificar = 0;
        }
        verificar = 1;
        printf("\n");
    }
    return 0;
}
