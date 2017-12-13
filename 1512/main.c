#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=1, a, b, s=0, i;

    while(n!=0)
    {
        scanf("%d %d %d", &n, &a, &b);
            if(n==0 && a==0 && b==0)
                break;

        for(i=1; i<=n; i++)
        {
            if(i%a==0 || i%b==0)
                s++;
        }
        printf("%d\n", s);
        s=0;
    }

    return 0;
}
