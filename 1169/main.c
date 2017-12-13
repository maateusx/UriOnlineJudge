#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double K;
    int n, k;

    scanf("%d", &n);

    while(n!=0)
    {
        scanf("%d", &k);
        K = pow(2,k-1);
        K = K/12000;
        K= K*2;
        printf("%.0lf kg\n", trunc(K));
        n--;
        K=k=0;
    }
    return 0;
}
