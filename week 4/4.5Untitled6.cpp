// code for week 4.5
#include<stdio.h>
int main()
{
	int i, n,k,j;
	printf("No of lines: ");
	scanf("%d",&n);
	
	printf("\n");
	
	for( i=0; i<n; i++)
	{
		for( k=0; k<(i) ;k++)
		printf("  ");
	    for(j=0; j<(2*n-2*i-1) ; j++)
	    printf("* ");
	printf("\n");
}
	
	return 0;
	
}
