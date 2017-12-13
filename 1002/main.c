#include <stdio.h>
#include <stdlib.h>

int main()
{
    double r, a, pi;
    pi = 3.14159;
    scanf("%lf", &r);
    a = r * r * pi;
    printf("A=%.4lf\n", a);
    return 0;
}
