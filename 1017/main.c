#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tm, vel,comb;
    scanf("%f %f", &tm, &vel);
    comb = (tm*vel)/12;
    printf("%.3f\n", comb);
    return 0;
}
