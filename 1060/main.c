#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    int i=0,total=0;
    do{
        scanf("%f", &x);
        if (x>0)
            total++;
        i++;
    } while(i<6);
    printf("%d valores positivos\n",total);
    return 0;
}
