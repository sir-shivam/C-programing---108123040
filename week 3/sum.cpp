// sum 
#include<stdio.h>
int main()
{
	int n,c=0;
	printf("N=");
	scanf("%d",&n);
	for(int i=0; i<=n ; i++)
	{
		c=c+i;
	}
	printf("%d is the sum of all N",c);
	return 0;
}
