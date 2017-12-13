#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n=11;
    double M[12][12],S=0, Med=0;
    char c;

    scanf("%c", &c);

    for(i=0; i<12; i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf", &M[i][j]);

            if(j<n && j>i){
                if(c=='M')
                    Med+=M[i][j];
                else
                    S+=M[i][j];

            }
        }
        n--;
    }
    Med=Med/30.00;
    if(c=='M'){
           printf("%.1lf\n",Med);
            }
            else
                printf("%1.lf\n",S);
    return 0;
}
