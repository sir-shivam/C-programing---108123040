// code for week 4.4
#include<stdio.h>
int main()
{
	int n,k,j;
	printf("No of lines: ");
	scanf("%d",&n);
	
	printf("\n");
	
	for(int i=1; i<=n; i++)
	{
		for( k=1; k<=(n-i) ;k++)
		printf(" ");
	    for(j=1; j<=(n); j++)
	    printf("* ");
	printf("\n");
}
	
	return 0;
	
}
