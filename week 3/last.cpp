#include<stdio.h>
int main()
{
	int n,r,t;
	printf("N=");
	scanf("%d",&n);
	r=n%10;
	while (n!=0)
	{
		t=n%10;
		n=n/10;
		
	}
	printf("%d is sum of 1st and last", t+r );
	return 0;
}
