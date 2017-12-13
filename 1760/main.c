#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double n=0, resp=0;
    while(scanf("%lf", &n)!=EOF)
    {
        resp= ((n*n) * sqrt(3))/4;
        resp = resp * 8/5;
        printf("%.2lf\n", resp);
    }
    return 0;
}
