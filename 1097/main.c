#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1,j=6;
    for(i=1; i<=9;i++)
    {
        for (j=6;j>=4;j--)
        {
            printf("I=%d J=%d\n", i, i+j);
        }
        j=6;
        i++;
    }
    return 0;
}
