////https://www.beecrowd.com.br/judge/pt/problems/view/1047

#include <stdio.h>

int main()
{
    int h1, m1, h2, m2, hf, mf;
    int ht, mt, tempototal, restantepara24;
    scanf("%d%d%d%d", &h1, &m1, &h2, &m2);

    ht = (h1 * 60) + m1;
    mt = (h2 * 60) + m2;
    if (mt >= ht)
    {
        tempototal = mt - ht;
        if (tempototal == 0)
        {
            printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
        }
        else
        {
            hf = tempototal / 60;
            mf = tempototal % 60;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hf, mf);
        }
    }
    else
    {
        restantepara24 = 1440 - ht;
        tempototal = mt + restantepara24;
        hf = tempototal / 60;
        mf = tempototal % 60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hf, mf);
    }
    return 0;
}
