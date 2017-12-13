#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, c, v[1001], media;
    double j;
    char p[]="%";

    scanf("%d", &c);

    while(c!=0)
    {
        n=i=media=j=0;
        scanf("%d", &n);
        for(i=0; i<n; i++)
        {
            scanf("%d", &v[i]);
            media+=v[i];
        }

        media=media/n;

        for(i=0; i<n; i++)
        {
           if(v[i]>media)
                j++;
        }
        printf("%.3lf", (j*100)/n);
        printf("%c\n", p[0]);
        c--;
    }
    return 0;
}
