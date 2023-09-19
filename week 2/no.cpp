/* day in month*/

#include<stdio.h>
int main()
{
	int a,b,c=28,d=29,f=30,g=31;
	printf("  year :");
	scanf("%d",&a);
	printf("month");
	scanf("%d",&b);
	if(b==2)
	{
	if(a%4==0 && (a%100 !=0 || a%400 ==0 ))
	printf("day= 29 ");}
	else 
	{
		switch(b)
		{
			case 1: printf("Day=31");
			case 2: printf("Day=30");
			case 3: printf("Day=31");
			case 4: printf("Day=30");
		    case 5: printf("Day=31");
		    case 6: printf("Day=30");
		    case 7: printf("Day=31");
		    case 8: printf("Day=31");
		    case 9: printf("Day=30");
	        case 10: printf("Day=31");
	        case 11: printf("Day=30");
	        case 12: printf("Day=31");
	}
}
	
	return 0;
}
