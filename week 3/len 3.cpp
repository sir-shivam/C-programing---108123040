// length
#include<stdio.h>
int main()
{
	int n,c=0;
	printf("N=");
	scanf("%d",&n);
	if(n!=0)
	{
		n=n/10;
		c++;
		
	}
	printf("%d is the length",c);
	return 0;
}
