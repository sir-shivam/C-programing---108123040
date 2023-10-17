// code for week 4.4
#include<stdio.h>
int main()
{
	int n,k,j,z;
	printf("No of lines: ");
	scanf("%d",&n);
	
	printf("\n");
	
	for(int i=1; i<=n; i++)
	{
		z=i;
		for( k=1; k<=(n-i) ;k++)
		printf(" ");
	    for(j=1; j<=(i) ; j++)
	    printf("%d ",z);
	printf("\n");
}
	
	return 0;
	
}
