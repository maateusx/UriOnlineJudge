#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, T, i, j;
    char v[51];

    scanf("%d", &n);

    while(n!=0)
    {
        T=j=i=0;
        scanf("%s", v);
        scanf("%d", &T);

        for(i=0; i<strlen(v); i++)
        {
            if(v[i]>='A' && v[i]<='Z')
            {
                j=v[i]-T;
                if(j<65)
                {
                    j=65-j;
                    j=91-j;
                }
                v[i]=j;
            }
            printf("%c", v[i]);
        }
        printf("\n");

        n--;
    }
    return 0;
}
