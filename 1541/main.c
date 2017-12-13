#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    float q, d, p, x, w, u, y;

    scanf("%f", &q);

    while(q!=0){
        scanf("%f %f", &d, &p);
        w=q*d;
        u=100.0/p;
        y=w*u;
        x=sqrt(y);

        printf("%.0f\n", truncf(x));
        scanf("%f", &q);

    }


    return 0;
}
