// program to write odd no.
#include<stdio.h>
int main()
{
	int n;
	printf("value of n:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		while(i%2!=0)
		printf("%d",i);
	}
	return 0;
	
}
