// code for week 4.2
#include<stdio.h>
int main()
{
	int n,k;
	printf("No of lines: ");
	scanf("%d",&n);
	
	printf("\n");
	k=0;
	for(int i=0; i<n; i++)
	{
	for(int j=0; j<(n-i); j++)
	{
	
	printf("%d  ",++k);
}	
	printf("\n");
}
	
	return 0;
	
}
