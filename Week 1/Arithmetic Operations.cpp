#include<stdio.h>
int main()
{
int a,b,c,d,e,f,g;
printf("Enter two Numbers: ");	
scanf("%d%d",&a,&b);
c=a+b;	
d=a-b;
e=a*b;
f=a/b;
g=a%b;

printf("Addition of two numbers given by user is %d \n",c);
printf("Substraction of two numbers given by user is %d \n",d);
printf("Multiplication of two numbers given by user is %d \n",e);
printf("Division of two numbers given by user is %d \n",f);
printf("Reminder obtained when first no. is divided by 2nd no. is %d\n",g);
return 0;
}
