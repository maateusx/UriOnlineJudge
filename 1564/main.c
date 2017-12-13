#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=1;
    char a,b,c;
    do{
    scanf("%d %c %c %c", &n,&a,&b,&c);
    if(n!=0)
        printf("vai ter duas!\n");
    else
        printf("vai ter copa!\n");
    } while(i!=0);
    return 0;
}
