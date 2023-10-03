#include<stdio.h>
int main()
{
	int n,d=0,r;
	printf(" N=");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		n=n/10;
		d=d+r;
	}
	printf("%d is sum",d);
	return 0;
	
}
