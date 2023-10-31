// missing
#include <stdio.h>
int main ()
{
   int arr[20];
   int i,m, j, a, n,key=1;
   printf("enter number n :");
   scanf("%d", &m);
   n=m-1;
   printf("data \n");
   for (i = 0; i < n; ++i)
      scanf("%d", &arr[i]);
for(j=0 ; j<n ; j++)
{
for(i=0 ; i<n ; i++)
{
	if(key==arr[i])
	{
	key++;
	break;
}

}
}
printf("missing %d ", key);
return 0;
}
