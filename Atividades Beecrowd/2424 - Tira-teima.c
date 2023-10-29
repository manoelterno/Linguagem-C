#include <stdio.h>
int main()
{
    int x, y; //  (0,0) e (432, 468)
    scanf("%d%d", &x, &y);
    if (x < 0 || x > 432 || y < 0 || y > 468)
    {
        printf("fora\n");
    }
    else
    {
        printf("dentro\n");
    }
    return 0;
}
