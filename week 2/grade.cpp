// grade
#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	char G,A, B, C, D, E,F;
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
	G=A;
	else if (f>=80)
	G=B;
	else if(f>=70)
	G=C;
	else if(f>=60)
	G=D;
	else if(f>=50)
	G=E;
	else 
	G=F;
		
	printf( "Grade : %c",G);
	return 0;
}
