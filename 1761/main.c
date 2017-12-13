#include <stdio.h>      /* printf */
#include <math.h>       /* tan */
#include <stdlib.h>
#define PI 3.141592654

int main ()
{
    double a, b, c, h;
    while(scanf("%lf %lf %lf", &a, &b, &c)!=EOF)
    {
        h = tan ( a * PI / 180.0 )*b + c;
        h = h*5;
        printf("%.2lf\n",h);
    }
    return 0;
}
