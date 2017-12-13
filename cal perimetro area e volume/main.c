#include <stdio.h>
#include <stdlib.h>

int main()
{
    double pi=3.14159, a, b, c, triang, circ, quad, ret, trap;
    scanf("%lf %lf %lf", &a, &b, &c);

        triang= (a*c)/2;
        circ= pi*c*c;
        trap= (c * (a+b))/2;
        quad=b*b;
        ret= a*b;

    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", triang, circ, trap, quad, ret);
    return 0;
}
