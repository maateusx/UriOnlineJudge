#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, i, j=0;
    char v1[51], v2[51];
    scanf("%d", &n);
    getchar();
    while(n!=0)
    {
        j=0;
        scanf("%s", v1);
        scanf("%s", v2);
        if(strlen(v2)>=strlen(v1))
        {
            for(i=0; i<strlen(v2); i++)
            {
                if(j<strlen(v1))
                {
                    printf("%c", v1[j]);
                    j++;
                }
                printf("%c", v2[i]);
            }
        }

        else if(strlen(v1)>strlen(v2))
        {
            for(i=0; i<strlen(v1); i++)
            {
                printf("%c", v1[i]);
                if(j<strlen(v2))
                {
                    printf("%c", v2[j]);
                    j++;
                }
            }
        }
        printf("\n");
        n--;
    }
    return 0;
}
