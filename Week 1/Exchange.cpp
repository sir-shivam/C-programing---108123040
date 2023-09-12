#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("Enter two numbers to be swaped: \n");
	printf("1st number \nSecond number  \n ");
	
	scanf("%d %d",&a,&b);
	c=a;
	a=b;
	b=c;
	
	printf("Now the numbers are exchanged \n");
	printf("now 1st no is %d \n",a);
	printf("and 2st no is %d",b);
	return 0;
}
