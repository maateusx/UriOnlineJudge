#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n,media=0,j=0;
    do
    {
        scanf("%f", &n);
        if (n>0)
        {
            media=media+n;
            j++;
        }
    }
    while(n>0);
    media=media/j;
    printf("%.2f\n",media);
    return 0;
}
