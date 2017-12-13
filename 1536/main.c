#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, t1, t2, s1, s2, sf1, sf2;
    char c;
    scanf("%d", &n);

    while(n!=0)
    {
        scanf("%d %c %d", &t1, &c, &t2);
        s1=t1; sf2=t2;
        scanf("%d %c %d", &t2, &c, &t1);
        sf1=t1; s2=t2;

        if((s1+sf1)>(s2+sf2))
            printf("Time 1\n");
        else if((s1+sf1)<(s2+sf2))
            printf("Time 2\n");
        else if(sf1>sf2)
            printf("Time 1\n");
        else if(sf1<sf2)
            printf("Time 2\n");
            else
                printf("Penaltis\n");

        n--;
    }
    return 0;
}
