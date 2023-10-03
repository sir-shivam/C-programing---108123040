// fact
#include<stdio.h>
int main()
{
	int n,c=1;
	printf("N=");
	scanf("%d",&n);
	for(int i=1; i<=n ; i++)
	{
		c=c*i;
	}
	printf("%d is the factorioal of  N",c);
	return 0;
}
