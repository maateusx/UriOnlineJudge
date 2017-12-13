#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a, b;
    char c;
    scanf("%d", &n);

    while(n!=0)
    {
        scanf("%d %c %d", &a, &c, &b);
        if(a==b)
            printf("%d\n", a*b);
        else if(c>=97)
            printf("%d\n", a+b);
        else if(c<97)
            printf("%d\n", b-a);
        n--;
    }
    return 0;
}
