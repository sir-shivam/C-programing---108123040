#include <stdio.h>
int main ()
{
   int arr[20];
   int i, j, a, n;
   printf("enter number n :");
   scanf("%d", &n);
   printf("data \n");
   for (i = 0; i < n; ++i)
      scanf("%d", &arr[i]);
   j=n-1;   
   for(i=0 ; i<n/2 ; i++) 
   {
   	a=arr[i];
   	arr[i]= arr[j];
   	arr[j]=a;
   	j--;
   }
   
   printf("result :");
   for(i=0 ; i<n ; i++)
   printf("%d ", arr[i]);
   
   return 0;
}

