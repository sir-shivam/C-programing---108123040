// u=l  
#include<stdio.h>
int main()
{
	char st[1000],  cp[1000];
	int i=0, l, k=0, p;
	printf("enter upper string : ");
	scanf("%s",&st);
	
	while(st[i]!=0)
	{ 	st[i]=st[i]+32;
		i++;
	}

    printf("%s", st);
	return 0;
}
