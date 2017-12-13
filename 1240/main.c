#include <stdlib.h>
#include <stdio.h>

int main()
{

    int A, B, CA, CB;
    int i = 0 , x = 10, n;
    scanf("%d", &n);
    while(n!=0)
    {

        x=10;
        scanf("%d %d", &A, &B);
        if(A == B)
            printf("encaixa\n");
        CA = A;
        CB = B;

        if(A < B)
        {
            printf("nao encaixa\n");
        }

        if(B < A)
        {
            A = CA % 10;

            while(A != CA)
            {

                if(A == B)
                {
                    printf("encaixa\n");
                    break;
                }
                else
                    x = x * 10;
                A = CA % x;
            }
            if(A != B) printf("nao encaixa\n");
        }

        n--;
    }

    return 0;
}
