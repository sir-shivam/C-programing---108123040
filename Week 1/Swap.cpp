#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Two Numbers: a ,b  ");
	scanf("%d %d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("Swap result: %d , %d ",a,b);
}
