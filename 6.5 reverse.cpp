// REVERSE
#include<stdio.h>
int main()
{
	char st[1000];
	int l, a,i=0;
	printf("enter string : ");
	scanf("%s",&st);
	
	while(st[i]!=0)
	i++;
	
	 l=0;
	while(i>=0)
	{a=st[i];
	st[i--]=st[l];
	st[l++]=a;
    }
printf("%s",st);
return 0;
}

