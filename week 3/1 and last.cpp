#include<stdio.h>
int main()
{
	int n;
	printf(" N=");
	scanf("%d",&n);
	int r;
	r=n%10;
	int t;
	while(n!=0)
	{
		t=n%10;
		n=n/10;
		
	}
	printf("%d is sum of 1st and last digit");
	return 0;
}
