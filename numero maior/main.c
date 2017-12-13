#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c, somaab;
    scanf("%d %d %d", &a, &b, &c);
    somaab= ( a+b+(a*b*c) *(a-b))/2;
        if (b < a > c){
            printf("%d eh o maior\n", a);
        }
        else if (a < b > c){
            printf("%d eh o maior\n", b);
        }
        else {
            printf("%d eh o maior\n", c);
        }
    return 0;
}
