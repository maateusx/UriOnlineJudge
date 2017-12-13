#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    double n;
    scanf("%lf",&n);
    do{
        printf("N[%d] = %.4lf\n", i, n);
        n=n/2.0;
        i++;

    } while(i<100);
    return 0;
}
