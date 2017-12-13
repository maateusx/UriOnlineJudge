#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char v[150];
    int n, tam, k, i, j, K;
    setbuf(stdin, NULL);
    while(scanf("%s", v)!=EOF)
    {
        k=tam=j=K=0;
        scanf("%d", &n);

        tam=strlen(v);
        for(i=0; i<tam; i++)
        {
            if(v[i]=='0')
            {
                j++;
                //v[i]=-1;
            }
            else
                break;
        }

        tam= tam - j;
        k=2-tam%3;
        if(k==3)
            k=0;

        printf("$");
        for(i=j; i<strlen(v); i++)
        {
            if(k==2 && K==0)
             {
                 k=0;
             }
            else{
                if(k==2)
                {
                    if(i!=0)
                        printf(",");
                    k=0;
                }
                else
                    k++;
                K++;
            }
            printf("%c", v[i]);
        }
        if(K==0)
            printf("0");

        if(n>=10)
            printf(".%d\n", n);
        else
            printf(".0%d\n", n);

    }

    return 0;
}
