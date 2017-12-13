#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    int m, n, o, p, m1=0, n1=0;
    scanf("%d %d", &m, &n);
    while(m!=0 || n!=0)
    {
        printf("comeca: ");
        scanf("%d", &n);
        m=0;
        m=n%2;
        printf("%d", m);
        printf("\n%d", m*10);
    }
    return 0;
}
