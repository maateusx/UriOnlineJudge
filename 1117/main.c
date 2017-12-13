#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1,j=1;
    float x,y;
    do{
        scanf("%f",&x);
        if (x<0 || x>10)
        {
            printf("nota invalida\n");
        }
        else if(x>0 && x<=10)
            i=-1;
    } while(i>0);

    do{
        scanf("%f",&y);
        if (y<0 || y>10)
        {
            printf("nota invalida\n");
        }
        else if(y>0 && y<=10)
            j=-1;
    } while(j>0);
    printf("media = %.2f\n", (x+y)/2);
    return 0;
}
