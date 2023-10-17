// code for week 4.4
#include<stdio.h>
int main()
{
	int n,k,j;
	printf("No of lines: ");
	scanf("%d",&n);
	
	printf("\n");
	
	for(int i=0; i<n; i++)
	{
		for( k=0; k<(i) ;k++)
		printf("  ");
	    for(j=0; j<(n-k) ; j++)
	    printf("* ");
	printf("\n");
}
	
	return 0;
	
}
