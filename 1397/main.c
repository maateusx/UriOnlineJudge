#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a, b, i, A, B;
    while(scanf("%d", &n)!=0)
    {
        if(n==0)
            break;

        A=B=0;
        for(i=0; i<n; i++)
        {
            scanf("%d %d", &a, &b);
            if(a>b)
                A++;
            if (b>a)
                B++;
        }
        printf("%d %d\n", A, B);
    }
    return 0;
}
