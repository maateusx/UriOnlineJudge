#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano, m, r, i;
    scanf("%d",&i);
    ano= i/365;
    r=i%365;
    m=r/30;
    r=r%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, m, r);
    return 0;
}
