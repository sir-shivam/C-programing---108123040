// reverse
#include<stdio.h>
int main()
{
	printf("N=");
	int n,e=0;
	scanf("%d",&n);
	while(n!=0)
	{
	   int d=n%10;
	   n=n/10;
	   e=e*10+d;
	   
	}
	printf("%d",e);
	return 0;
	}
