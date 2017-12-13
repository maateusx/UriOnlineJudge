#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,media=0;
    int i=0,total=0;
    do{
        scanf("%f", &x);
        if (x>0)
        {
            media+=x;
            total++;
        }
        i++;
    } while(i<6);
    printf("%d valores positivos\n%.1f\n",total,media/total);
    return 0;
}
