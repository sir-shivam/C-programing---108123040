#include<stdio.h>
int main()
{
	int r;
	int n;
	printf("decimal no ... N=");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%2;
		n=n/2;
		printf("%d",r);
		
	}
	return 0;
}
	

