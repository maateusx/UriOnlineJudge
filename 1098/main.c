#include <stdio.h>
#include <stdlib.h>

int main()
{
    float j=1,i=0.0;
    do{
        for (j=1;j<=3;j++)
        {
            if (i==0.0)
                printf("I=0 J=%.0f\n",j);
            else if (i==1.0)
                printf("I=1 J=%.0f\n",j+1);
            else if (i==2.0)
                printf("I=2 J=%.0f\n",j+2);
            else
                printf("I=%.1f J=%.1f\n", i, j+i);
        }
        j=1;
        i=i+0.2;
    } while (i<=2);
    printf("I=2 J=3\n");
    printf("I=2 J=4\n");
    printf("I=2 J=5\n");
    return 0;
}
