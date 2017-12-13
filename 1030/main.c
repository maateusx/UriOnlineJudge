#include <stdio.h>
#include <stdlib.h>

int f(int n, int k)
{
    if(n==1)
        return 1;
    else
        return ((k-1 + f(n-1,k))%n + 1);
}

int main()
{
    int n, a, b, resp, k=1;

    scanf("%d", &n);

    while(n!=0)
    {
        scanf("%d %d", &a, &b);
        resp=f(a,b);
        printf("Case %d: %d\n", k, resp);
        k++;
        n--;
    }
    return 0;
}
