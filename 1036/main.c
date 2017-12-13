#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b, c, delta, resp, resp1;
    scanf("%lf %lf %lf", &a, &b, &c);
    delta=b*b -(4*a*c);
        if (delta<0 || a==0){
            printf("Impossivel calcular\n");
        }
        else
        {
    resp=((-b)+(sqrt(delta)))/(2*a);
    resp1=((-b)-(sqrt(delta)))/(2*a);
    printf("R1 = %.5lf\nR2 = %.5lf\n", resp, resp1);
        }

    return 0;
}
