//salary

#include<stdio.h>
int main ()
{
	int a,b,c;
	printf(" Basic salary:");
	scanf("%d",&a);
	
	b=a*44/100;                      /*for HRA is 17%
	                                 for DA it is 44% */
	c=a*17/100;
	printf(" salary : %d",a+b+c);
	return 0;
	
	
	
}
