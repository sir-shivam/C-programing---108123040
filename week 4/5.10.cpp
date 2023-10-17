// code for week 4
#include<stdio.h>
int main()
{
	int n,i ,j,k,l;
	printf("No of lines: ");
	scanf("%d",&n);
	
	printf("\n");
	
	for( i=0; i<n/2; i++)
	{
	for( j=0; j<=i; j++)
	printf("* ");
	printf("\n");
    }
    for( k=0; k<(n/2); k++)
	{
	for( l=0; l<(n/2-k); l++)
	printf("* ");
	printf("\n");}
	
	return 0;
	
}
