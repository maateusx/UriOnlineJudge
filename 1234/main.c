#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i=0, up=2;
    char vet[51];

    while(gets(vet)!= NULL)
    {
        while(vet[i]!='\0')
        {
            if(vet[i]!=' ')
            {
                if(up>=2)
                {
                    vet[i]=toupper(vet[i]);
                    printf("%c", vet[i]);
                    up=1;
                }
                else
                {
                    vet[i]=tolower(vet[i]);
                    printf("%c", vet[i]);
                    up++;
                }

            }
            else
            {
                printf("%c", vet[i]);
            }
            i++;
        }
        printf("\n");
        i=0;
        up=2;
    }

    return 0;
}
