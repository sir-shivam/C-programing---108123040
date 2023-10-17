// code for week 4
#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("No of lines: ");
	scanf("%d",&n);
	
	printf("\n");
	
	for(i=0; i<n; i++)
	{k=0;
	for(j=0; j<=i; j++)
	printf("%d ",++k);

	printf("\n");
}
	
	return 0;
	
}
