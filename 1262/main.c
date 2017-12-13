#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, i, j, L, cont;
    char v[51];

    fflush(stdin);

    while(scanf("%s", v)!=EOF)
    {
        cont=i=L=n=0;
        j=1;
        scanf("%d", &n);
        L=strlen(v);
        for(i=0; i<L; i++)
        {
            if(v[i]=='W')
            {
                cont++;
                j=1;
            }
            else if(v[i]=='R')
            {
                if(j==1 && j==n)
                {
                    cont++;
                }
                else if(j==1)
                {
                    cont++;
                    j++;
                }
                else if(j<n)
                    j++;
                else if(j==n)
                    j=1;
            }
        }
        printf("%d\n", cont);

    }

    return 0;
}
