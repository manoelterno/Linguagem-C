/*4 - (Recursividade) Escreva uma função recursiva que produza o reverso de um string,
reverse(char s[]) */
# include <stdio.h>

void inverter(char *texto)
{
  if (*texto != '\0')
  {
    inverter(texto + 1);
    printf("%c", *texto);
  }
}

int main()
{
  char texto[50]; // max 50 caracteres
  gets(texto);
  inverter(texto);
  return 0;
}