// interchange

#include <stdio.h>
int main ()
{
   int arr[20];
   int i=0, j, a, n;
   printf("enter number n :");
   scanf("%d", &n);
   printf("data \n");
   for (i = 0; i < n; i++)
      scanf("%d", &arr[i]);

   while(i=0 ; i<n ; i++)
   {
   	a= arr[i];
   	arr[i]=arr[i+1];
   	arr[i+1]=a;
   	i++;
   }
   
printf("result :\n");
for(j=0 ; j<n ; j++)
printf("%d ", arr[j]);

return 0;
}
