// week
#include<stdio.h>
int main()
{
	int d;
	printf("Day no. :");
	scanf("%d",&d);
	switch(d)
	{
		case 1: 
		printf("Monday");
		break;
		case 2:
		printf("Tuesday");
		break;
		case 3:
		printf("Wednesday");
		break;
		case 4:
			printf("Thursday");
			break;
		case 5:
			printf("Friday");
			break;
		case 6:
			printf("saturday");
			break;
		case 7: 
		printf("Sunday");
		break;
		default:
			printf("Not a valid data");
		return 0;
	}
}
