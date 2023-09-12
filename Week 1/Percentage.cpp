#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	float f;
 	printf("What is your marks in respective Subjects : ");
 	printf("\nEnglish :");
 	scanf("%d",&a);
 	printf("Maths: ");
 	scanf("%d",&b);
 	printf("Science : ");
 	scanf("%d",&c);
 	printf("History: ");
 	scanf("%d",&d);
 	printf("Geography: ");
 	scanf("%d",&e);
f= ((a+b+c+d+e)/5);
    
    printf("Congrats you got %f %% ",f);
    return 0;
}
