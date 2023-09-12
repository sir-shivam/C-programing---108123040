#include<stdio.h>
int main()
{
	float a,b,c;
	int d;
	
	printf("Enter two numbrs: \n");
	printf("1st number \nSecond number  \n ");
	
	scanf("%f %f",&a,&b);
	
	
	c=a*b;
	d=c;
	printf("\nMultiplication of %f and %f in float is %f",a,b,c);
	printf("\nMultiplication of %f and %f in integer is %d",a,b,d);
	return 0;
}
