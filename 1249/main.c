#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, i;
    char v[51];

    fflush(stdin);
    while(gets(v)!=NULL)
    {
        n=i=0;
        for(i=0; i<strlen(v); i++)
        {
            n=0;
            if(v[i]>='a' && v[i]<='z')
            {
                n=v[i]+13;
                if(n>122)
                {
                    n=n-123;
                    n=97+n;
                }
                v[i]=n;
            }

            if(v[i]>='A' && v[i]<='Z')
            {
                n=v[i]+13;
                if(n>90)
                {
                    n=n-91;
                    n=65+n;
                }
                v[i]=n;
            }
            printf("%c", v[i]);
        }
        printf("\n");
    }

    return 0;
}
