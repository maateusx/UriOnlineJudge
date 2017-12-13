#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, i, j, sug;
    char v1[]="Rolien", v2[]="Naej", v3[]="Elehcim", v4[]="Odranoel";
    scanf("%d", &n);

    while(n!=0)
    {
        scanf("%d", &j);
        for(i=0; i<j; i++)
        {
            scanf("%d", &sug);
            if(sug==1)
                puts(v1);
            else if(sug==2)
                puts(v2);
            else if(sug==3)
                puts(v3);
            else
                puts(v4);
        }
        n--;
    }
    return 0;
}
