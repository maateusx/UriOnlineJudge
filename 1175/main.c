#include <stdio.h>
#include <stdlib.h>

void funca(int n[])
{
	int i=0,j=19,aux=0;
	for (i=0; i<20; i++)
{
	printf("N[%d] = %d\n",i,n[j]);
	j--;
}
return;
}

int main (){
	int n[20],i;
	for(i=0;i<20;i++)
{
	scanf("%d",&n[i]);
}
	funca(n);
	return 0;
}
