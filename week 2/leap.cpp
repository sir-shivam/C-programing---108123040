/* leap year*/

#include<stdio.h>
int main()
{
	int a;
	printf(" What uis the the year :");
	scanf("%d",&a);
	
	if(a%4==0 && (a%100 !=0 || a%400 ==0 ))
	printf("It is a leap year ");
	else
	printf("Not a leap year");
	return 0;
}
