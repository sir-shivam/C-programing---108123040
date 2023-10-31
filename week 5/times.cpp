//  repeat

#include <stdio.h>
int main ()
{
   int arr[20];
   int i, j, a, n,key, c=0;
   printf("enter number n :");
   scanf("%d", &n);
   printf("data \n");
   for (i = 0; i < n; ++i)
      scanf("%d", &arr[i]);

printf("key = ");
scanf("%d" , &key);

for(i=0 ; i<n ; i++)
{
	if(key==arr[i])
	c++;
}

printf("it is repeated %d times", c);
return 0;
}
