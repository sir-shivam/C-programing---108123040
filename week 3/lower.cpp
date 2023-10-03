// alp
#include<stdio.h>
int main()
{
	char alp='a',n;
	printf("Till which Letter To print?:");
	scanf("%c",&n);
	while(alp<=n)
	{
		printf("%c\n",alp);
		alp++;

	}
	return 0;
}
