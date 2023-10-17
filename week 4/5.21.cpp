#include<stdio.h>
int main()
{
	int n,m,i,s,j,z,k,l,y;
	printf("mirror at line n: ");
	scanf("%d",&n);
	m=2*n-1;
	y=0;
	for(i=1; i<=m ; i++)
	{
		if(i<=n)
		{
		for(s=1; s<=n-i ; s++)
		printf("  ");
		for(j=1 ; j<=2*i-1 ; j++)
		printf("* ");
		printf("\n");
		}
		
		else
		{
			y++;
		
			for(k=1 ; k<=y; k++)
			printf("  ");
			
			for(l=1; l<=(2*n-2*k+1); l++)
			printf("* ");
			
		    printf("\n");
		
		}
	}
return 0;	
	
}
