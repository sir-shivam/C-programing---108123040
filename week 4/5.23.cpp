#include<stdio.h>
int main()
{
	int n,m,a,k,j,i,e;
	printf("n and m :");
	scanf("%d %d",&n,&m);
	a=2*m;
	e=m;
	for(i=1 ; i<=a ; i++)
	{
		if(i<=m)
		{
		for(j=1 ; j<=i; j++)
		printf("%d ",n);
		n++;
	}
		else
		{
			--n;
	    for(k=1;  k<=e ; k++)
	    {
	    	
	    	printf("%d ",n);
		}
		e--;
	}
		
		printf("\n");
	    
	}
	return 0;
	
}
