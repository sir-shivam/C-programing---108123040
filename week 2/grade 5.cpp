// grade
#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	
	printf("Physics:");
	scanf("%d",&a);
	printf("Chem:");
	scanf("%d",&b);
 	printf("Bio:");
	scanf("%d",&c);
	printf("Maths:");
	scanf("%d",&d);
	printf("computer:");
	scanf("%d",&e);
	f=(a+b+c+d+e)/5;
	
	if(f>=90)
	
	printf( "Grade  A");
	else if (f>=80)
	printf( "Grade  B");
	else if(f>=70)
	
	printf( "Grade  C");
	else if(f>=60)
	printf( "Grade  D");
	else if(f>=50)
	printf( "Grade  E");
	else 
	printf( "Grade  F");
		
	
	return 0;
}
