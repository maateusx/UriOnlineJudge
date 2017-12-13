#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector>       // std::vector
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct myclass
{
    bool operator() (int i,int j)
    {
        return (i<j);
    }
} myobject;

int main ()
{
    /*
    //int myints[] = {32,71,12,45,26,80,53,33};
    //vector<int> myvector (myints, myints+8);               // 32 71 12 45 26 80 53 33

    // using default comparison (operator <):
    sort (myvector.begin(), myvector.begin()+4);           //(12 32 45 71)26 80 53 33

    // using function as comp
    sort (myvector.begin()+4, myvector.end(), myfunction); // 12 32 45 71(26 33 53 80)

    // using object as comp
    //sort (myvector.begin(), myvector.end(), myobject);     //(12 26 32 33 45 53 71 80)

    // print out content:
    cout << "myvector contains:";
    for (vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
        cout << ' ' << *it;
    cout << '\n';*/

    int a, b, i, j, k, K, caso=1;
    while(scanf("%d %d", &a, &b)!=0)
    {
        i=j=k=K=0;
        if(a==0 &&  b==0)
            break;

        int vet1[a], vet2[b];

        for(i=0; i<a; i++)//le vetor
        {
            scanf("%d", &vet1[i]);
        }
        vector<int> myvector (vet1, vet1+a);
        for(i=0; i<b; i++) //ler os que procura
        {
            scanf("%d", &vet2[i]);
        }

        sort (myvector.begin(), myvector.end(), myobject); //ordena

        printf("CASE# %d:\n", caso);
        k=0;
        for(i=0; i<b; i++) //procura e printa
        {
            K=1;
            for (vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
            {
                if(*it==vet2[i])
                {
                    printf("%d found at %d\n", vet2[i], K);
                    k++;
                    break;
                }
                K++;
            }
            if(k==0)
                printf("%d not found\n", vet2[i]);
            k=0;
        }
        caso++;
    }
    return 0;
}
