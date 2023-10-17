// code for week 4.4
#include<stdio.h>
int main()
{
	int n,k,j,i,l,m,s,r;
	printf("No of lines: ");
	scanf("%d",&n);
	
	printf("\n");
	 m=n/2;
	
	for( i=0; i<m; i++)
	{
		for( k=0; k<(i) ;k++)
		printf("  ");
	    for(j=0; j<(m-k) ; j++)
	    printf("* ");
	printf("\n");
}
for(l=0; l<m; l++)
	{
		for(s=0; s<(m-l-1) ; s++)
		printf("  ");
	for(r=0; r<=l; r++)
	printf("* ");
	printf("\n");
}
	
	return 0;
	
}
