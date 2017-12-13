#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char vet[101], exp[12];
    int n, C=0, y=0, i=0, K=0, K1=0, cont=0;
    scanf("%d", &n);
    while(n!=0)
    {
        i=0;
        scanf("%d ", &C);

        while(C>0)
        {
            K=K1=0;
            gets(exp);

            if(strcmp(exp,"LEFT")==0)
            {
                y--;
                vet[i]='L';
            }

            else if(strcmp(exp,"RIGHT")==0)
            {
                y++;
                vet[i]='R';
            }

            else if(exp[0]=='S') //same as
            {
                cont=strlen(exp);
                if(cont==9) //1 digito
                {
                    K=(int)exp[8]-48;

                    if(vet[K-1]=='L')
                    {
                        y--;
                        vet[i]='L';
                    }

                    else if(vet[K-1]=='R')
                    {
                        y++;
                        vet[i]='R';
                    }
                }
                else //2 digito
                {
                    K=(int)exp[8]-48;
                    K1=(int)exp[9]-48;
                    K=K*10+K1;

                    if(vet[K-1]=='L')
                    {
                        y--;
                        vet[i]='L';
                    }

                    else if(vet[K-1]=='R')
                    {
                        y++;
                        vet[i]='R';
                    }

                }

            }

            C--;
            i++;
        }

        printf("%d\n", y);
        i=C=y=cont=0;
        n--;
    }
    return 0;
}
