#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c, cont;
    int N1, N2, D2, D1, a ,b, a1, b1;
    int n, i, k=1;

    scanf("%d", &n);
    while(n!=0)
    {
        scanf("%d %c %d %c %d %c %d", &N1, &c, &D1, &cont, &N2, &c, &D2);
        if(cont=='+')
        {
            a=N1*D2 + N2*D1;
            b=D1*D2;
            printf("%d/%d = ", a, b);
        }

        else if(cont=='-')
         {
            a=(N1*D2) - (N2*D1);
            b=D1*D2;
            printf("%d/%d = ", a, b);
         }
        else if(cont=='*')
         {
            a=(N1*N2);
            b=(D1*D2);
            printf("%d/%d = ", a, b);
         }
        else if(cont=='/')
        {
            a=(N1*D2);
            b=(N2*D1);
            printf("%d/%d = ", a, b);
        }
        a1=a;
        b1=b;

        while(k!=0)
            {
                if(a>=b)
                {
                    for(i=2; i<=a; i++)
                    {
                        if(a%i==0 && b%i==0)
                        {
                            a=a/i;
                            b=b/i;
                            break;
                        }
                    }
                }
                else if(a<b)
                {
                    for(i=2; i<=b; i++)
                    {
                        if(a%i==0 && b%i==0)
                        {
                            a=a/i;
                            b=b/i;
                            break;
                        }
                    }
                }

                if(a1==a)
                {
                    break;
                }
                else
                {
                    a1=a;
                    b1=b;
                }
            }
        printf("%d/%d\n", a, b);
        n--;
    }
    return 0;
}
