#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float x, y, z;
    scanf("%d",&n);
    do{
        scanf("%f %f %f", &x, &y, &z);
        printf("%.1f\n", ((x*2)+(y*3)+(z*5))/10);
        n--;
    } while(n>0);
    return 0;
}
