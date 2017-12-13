#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    char v[6];
    scanf("%d ", &n);

    while(n!=0)
    {
        gets(v);
        if(strlen(v)>=5)
        {
            printf("3\n");
        }
        else
        {

            if((v[0]='o' && (v[1]=='n' || v[2]=='e')) || (v[1]='n' && (v[0]=='o' || v[2]=='e')) || (v[2]='e' && (v[0]=='o' || v[1]=='n')))
            {
                printf("1\n");
            }
            else
                printf("2\n");
        }
        n--;
    }
    return 0;
}
