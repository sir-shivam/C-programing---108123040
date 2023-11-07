// join
#include<stdio.h>
int main()
{
	char st[1000],  cp[1000];
	int i=0, k=0, p;
	printf("enter string : ");
	scanf("%s",&st);
	printf("enter string : ");
	scanf("%s",&cp);
	
	while(st[i]!=0)
	i++;
	while(cp[k]!=0)
	st[i++]=cp[k++];
	

	printf("%s",st);
}
