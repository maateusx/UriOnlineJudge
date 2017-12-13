#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, k=0;
    char v[]="NONPNOPNPONOP";

    do{
        k=0;
        scanf("%d", &n);
        if(n==0)
            break;

        for(i=0; i<n; i++)
        {
            printf("%c", v[k]);
            k++;
            if(k==13)
                k=0;
        }
    printf("\n");

    }while(n!=0);

    printf("\n");
    return 0;
}
