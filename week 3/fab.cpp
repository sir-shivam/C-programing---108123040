// fibo
#include<stdio.h>
int main()
{
	int n;
	printf("N=");
	scanf("%d",&n);
	int t1=0,t2=1;
	int new =t1+t2;
	printf("%d %d",t1,t2);
	for (int i = 3; i <= n; ++i)
	 {
    printf("%d ",new);
    t1 = t2;
    t2 = new;
    new = t1 + t2;
}
return 0;
}
