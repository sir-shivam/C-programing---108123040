#include<stdio.h>
int main()
{
	
	int i, j, k ,l ,m, n,s ;
	printf("mirror at line n: ");
	scanf("%d",&n);
	for (i=1; i<=n ; i++)
	{
		
		if(i<=n/2)
		{
			for (j=1; j<=i ; j++)
			printf("* ");
			for (s=1; s<=n-2*i ; s++)
			printf("  ");
			for (k=1; k<=i ; k++)
			printf("* ");
			
			printf("\n");
		}
		else
		{
			for (j=1; j<=n-i+1 ; j++)
			printf("* ");
			for (s=1; s<=i-j ; s++)
			printf("  ");
			for (k=1; k<=n-i+1 ; k++)
			printf("* ");
			
			printf("\n");
			
		}
	}
	return 0;
}
