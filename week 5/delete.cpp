// delete
#include <stdio.h>
int main ()
{
   int arr[20];
   int i, j, a, n,k;
   printf("enter number n :");
   scanf("%d", &n);
   printf("data \n");
   for (i = 0; i < n; ++i)
      scanf("%d", &arr[i]);
      
   for(i=0 ; i<n ; i++)
   {
   	for(j=i+1; j<n ; j++)
   	{
   		if (arr[i]==arr[j])
   		{
		   for(k=j ; k<n ; k++)
   		{  arr[j]=arr[j+1];
   		n--;
		   }}
	   }
   }
   printf("result :\n");
for(j=0 ; j<n ; j++)
printf("%d ", arr[j]);

return 0;
}
