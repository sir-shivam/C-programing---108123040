// length
#include<stdio.h>
int main()
{
	int number,count=0;
	printf("N=");
	scanf("%d",&number);
	 do{ 
            number = number / 10; 
            ++count; 
        }while (number != 0) ;
	printf("%d is the length",count);
	return 0;
}
