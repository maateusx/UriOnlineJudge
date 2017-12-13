#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1, x2, y1, y2, m=0, p=0, K=0;

    while((x1!=0)&&(y1!=0)&&(x2!=0)&&(y2!=0))
    {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        if(x1==0 && y1==0 && x2==0 && y2==0)
            break;

        if(x1==x2 && y1==y2)
        {
            printf("0\n");
            K=1;
        }

        else if(x1==x2 || y1==y2)
        {
            printf("1\n");
            K=1;
        }

        else if(x2>x1 && y2>y1)
        {
            m=x1;
            p=y1;

            while(m!=x2 || p!=y2)
            {
                p++;
                m++;
                if(m>x2 || p>y2)
                    {
                        printf("2\n");
                        break;
                    }
            }

            if(m==x2 && p==y2)
                printf("1\n");
            K=1;
        }

        else if(x1>x2 && y1>y2)
        {
            m=x2;
            p=y2;

            while(m!=x1 || p!=y1)
            {
                p++;
                m++;
                if(m>x1 || p>y1)
                    {
                        printf("2\n");
                        break;
                    }
            }

            if(m==x1 && p==y1)
                printf("1\n");
            K=1;
        }

        else if(x2>x1 && y1>y2)
        {
            m=x2;
            p=y2;

            while(m!=x1 || p!=y1)
            {
                p++;
                m--;
                if(m<x1 || p>y1)
                    {
                        printf("2\n");
                        break;
                    }
            }

            if(m==x1 && p==y1)
                printf("1\n");
            K=1;
        }

        else if(x1>x2 && y2>y1)
        {
            m=x2;
            p=y2;

            while(m!=x1 || p!=y1)
            {
                p--;
                m++;
                if(m>x1 || p<y1)
                    {
                        printf("2\n");
                        break;
                    }
            }

            if(m==x1 && p==y1)
                printf("1\n");
            K=1;
        }

       if(K==0)
          printf("2\n");
    }

    return 0;
}
