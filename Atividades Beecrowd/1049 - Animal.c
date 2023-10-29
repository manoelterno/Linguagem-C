#include <stdio.h>

int main()
{
    char primeiro[20];
    char segundo[20];
    char terceiro[20];
    scanf("%s", primeiro);
    scanf("%s", segundo);
    scanf("%s", terceiro);
    if(primeiro[0] == 'v' && segundo[0] == 'a' && terceiro[0] == 'c') printf("aguia\n");
    if(primeiro[0] == 'v' && segundo[0] == 'a' && terceiro[0] == 'o') printf("pomba\n");
    if(primeiro[0] == 'v' && segundo[0] == 'm' && terceiro[0] == 'o') printf("homem\n");
    if(primeiro[0] == 'v' && segundo[0] == 'm' && terceiro[0] == 'h') printf("vaca\n");
    if(primeiro[0] == 'i' && segundo[0] == 'i' && terceiro[2] == 'm') printf("pulga\n");
    if(primeiro[0] == 'i' && segundo[0] == 'i' && terceiro[2] == 'r') printf("lagarta\n");
    if(primeiro[0] == 'i' && segundo[0] == 'a' && terceiro[0] == 'h') printf("sanguessuga\n");
    if(primeiro[0] == 'i' && segundo[0] == 'a' && terceiro[0] == 'o') printf("minhoca\n");
return 0;
}