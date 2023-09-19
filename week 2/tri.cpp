//tri
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter 3 sides : ");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b && a==c)
	printf("Equilateral");
	else if (a==b || b==c || a==c)
	printf("Isoceles");
	else
	printf("Scelen");
	return 0;
}
