#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    double p, q, d, r=1.0, pag;

    while(scanf("%lf", &q))
    {
        pag=0;
        if (q==0)
            break;

        scanf("%lf %lf", &d, &p);

    r=(q*d)/(p-q);

    pag=p*r;

    if (pag >= 2 || pag < 1)
        printf("%.0lf paginas\n", trunc(pag));
    else
        printf("%.0lf pagina\n",  trunc(pag));

    }
    return 0;
}
