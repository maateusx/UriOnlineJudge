#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[10001], b[10001];
    int i, j, n, K, K1;
    double num=0;

    scanf("%d", &n);

    while(n!=0)
    {
        num=0;
        i=j=K=K1=0;

        scanf("%s %s",&a, &b);
        for(i=0; i<strlen(a); i++)
        {
            K=a[i];
            K1=b[i];

            while(K1!=K)
            {
                if(K>=97 && K<122)
                {
                    num=num+1;
                    K++;
                }
                else
                {
                    num=num+1;
                    K=97;
                }
            }
        }
        printf("%.0lf\n", num);
        n--;
    }

    return 0;
}
