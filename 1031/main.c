#include <stdio.h>
#include <stdlib.h>

int f(int n, int k)
{
    if(n==1)
        return 1;
    else
        return ((k + f(n-1,k))%n + 1);
}

int main()
{
    int n, a, b, resp, k=1, menor=0;

    scanf("%d", &n);

    while(n!=0)
    {
        scanf("%d", &a);
        for(b=1; b<=a; b++)
        {
            resp=f(a,b);
            if(resp==13 && (b<menor || menor==0))
                menor=b;
        }
        printf("Case %d: %d: %d\n", k, resp-1, menor);
        k++;
        n--;
    }
    return 0;
}
