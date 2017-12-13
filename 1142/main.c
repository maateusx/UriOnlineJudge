#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=0,j=1,k=0;
    scanf("%d", &n);
    do
    {
        for (j=0; j<=3; j++)
        {
            k++;
            if (k%4 != 0)
                printf("%d ",k);
            else
                printf("PUM\n");

        }
        j=1;
        i++;
    }
    while(i<n);
    return 0;
}
