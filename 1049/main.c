#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ca1[30],ca2[30], ca3[30];
    gets(ca1);
    gets(ca2);
    gets(ca3);

    if (strcmp (ca1, "vertebrado") == 0)
    {

        if (strcmp(ca2,"ave") == 0)
        {

            if (strcmp(ca3,"carnivoro") == 0)
                printf("aguia\n");
            else
                printf("pomba\n");
        }

        else
        {
            if(strcmp(ca3,"onivoro") == 0)
                printf("homem\n");
            else
                printf("vaca\n");
        }
    }

    else
    {

        if (strcmp(ca2,"inseto") == 0)
        {

            if (strcmp(ca3,"hematofago") == 0)
                printf("pulga\n");
            else
                printf("largata\n");
        }

        else
        {
            if(strcmp(ca3,"hematofago") == 0)
                printf("sanguessuga\n");
            else
                printf("minhoca\n");
        }
    }
    return 0;
}
