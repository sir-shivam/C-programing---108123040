// code for week 4
#include<stdio.h>
int main()
{
	int n;
	printf("No of lines: ");
	scanf("%d",&n);
	
	printf("\n");
	
	for(int i=0; i<n; i++)
	{
	for(int j=0; j<=i; j++)
	printf("* ");
	printf("\n");
}
	
	return 0;
	
}
