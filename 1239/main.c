#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char v[51];
    int i, L, A,B;

    fflush(stdin);
    while(gets(v)!=NULL)
    {
        L=A=B=0;
        L=strlen(v);
        for(i=0; i<L; i++)
        {
            if(v[i]=='_')
            {
                if(A==0)
                {
                    printf("<i>");
                    A=1;
                }
                else
                {
                    printf("</i>");
                    A=0;
                }
            }

            else if(v[i]=='*')
            {
                if(B==0)
                {
                    printf("<b>");
                    B=1;
                }
                else
                {
                    printf("</b>");
                    B=0;
                }
            }
            else
                printf("%c",v[i]);
        }
        printf("\n");
    }
    return 0;
}
