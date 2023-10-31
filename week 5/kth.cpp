// kth
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

printf("k = ");
scanf("%d" , &k);
   for (i = 0; i < n; ++i){
      for (j = i + 1; j < n; ++j){
         if (arr[i] > arr[j]){
            a = arr[i];
            arr[i] = arr[j];
            arr[j] = a;
         }
      }
   }
   
printf(" %d th smallest : %d \n %d th largest is %d ",k, arr[k-1],k, arr[n-k]);

printf(" ascending order is:");
   for (i = 0; i < n; ++i){
      printf("%d ", arr[i]);
   }
return 0;
}
