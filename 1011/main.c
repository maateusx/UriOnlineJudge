#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r, pi;
    scanf("%f", &r);
    pi= 3.14159;
    r= (4.0/3.0)*r*r*r*pi;
    printf("VOLUME = %.3f\n", r);
    return 0;
}
