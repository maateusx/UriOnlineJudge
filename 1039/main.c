#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double r1, r2, x1, x2, y1, y2, a1;

    while(scanf("%lf %lf %lf %lf %lf %lf", &r1, &x1, &y1, &r2, &x2, &y2)!=EOF)
    {
        a1=sqrt((x2-x1)*(x2-x1)+((y2-y1)*(y2-y1)));
        if (r1-a1>=r2 )// a1>=r2)
            printf("RICO\n");
        else
            printf("MORTO\n");
    }

    return 0;
}
