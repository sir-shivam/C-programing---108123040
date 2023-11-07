// length
#include<stdio.h>
int main()
{
	char st[1000];
	int l=0;
	printf("enter string : ");
	scanf("%s",&st);
	
	for(int i=0 ; i<l+1; i++)
	if(st[i]!='\0')
	l++;
	else
	break;
	
	printf("length %d ",l);
}
