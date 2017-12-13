#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char c[1000];
    int n, x=0, i=0;
    scanf("%d ", &n);

    while(n!=0)
    {
        gets(c);
        x=0;
        for(i=0; c[i]!='\0'; i++)
        {
            if(c[i]=='1')
                x=x+2;
            else if(c[i]=='2' || c[i]=='3' || c[i]=='5')
                x=x+5;
            else if(c[i]=='4')
                x=x+4;
            else if(c[i]=='6' || c[i]=='9' || c[i]=='0')
                x=x+6;
            else if(c[i]=='7')
                x=x+3;
            else if (c[i]=='8')
                x=x+7;
        }
        printf("%d leds\n", x);
        n--;
    }
    return 0;
}
