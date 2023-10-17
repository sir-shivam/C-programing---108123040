// code for week 4.2
#include<stdio.h>
int main()
{
	int n,m,i,j,l,o,k;
	printf("No of lines: ");
	scanf("%d",&n);
	
	printf("\n");
	m=n/2;
	for( i=0; i<m; i++)
	{
	for(j=0; j<(m-i); j++)
	printf("* ");
	printf("\n");
}
	for( k=0; k<m; k++)
	{
	for( l=0; l<=k; l++)
	printf("* ");
	printf("\n");
}
	
	return 0;
	
}
