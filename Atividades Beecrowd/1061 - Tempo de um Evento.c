#include <stdio.h>
#include <stdlib.h>
int main(){
    int d1, h1, m1, s1, st1;
    int d2, h2, m2, s2, st2;
    int df, hf, mf, sf, stf;
    scanf("Dia %d", &d1);
    scanf(" %d : %d : %d", &h1, &m1, &s1); // espaço no scanf para nao deixar o ENTER ser lido
    scanf(" Dia %d", &d2);
    scanf(" %d : %d : %d", &h2, &m2, &s2);
    d1 = d1 * 60 * 60 * 24;
    h1 = h1 * 60 * 60;
    m1 = m1 * 60;
    d2 = d2 * 60 * 60 * 24;
    h2 = h2 * 60 * 60;
    m2 = m2 * 60;
    st1 = d1 + h1 + m1 + s1;
    st2 = d2 + h2 + m2 + s2;
    stf = st2 - st1;
    df = stf / 86400;
    stf = stf % 86400;
    hf = stf / 3600;
    stf = stf % 3600;
    mf = stf / 60;
    stf = stf % 60;
    sf = stf;
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", df, hf, mf, sf);
    return 0;
} 
