#include<stdio.h>
int main()
{
	float a,b,c,d;
	printf("Enter a value in Km :");
	scanf("%f",&a);
	
	b=a*1000;
	c=b*100;
	d=c*10;
	printf("%f Km \n",a);
	printf("= %f m \n ",b);
	printf("= %f cm \n",c);
	printf("= %f mm \n",d);
	return 0;
}
