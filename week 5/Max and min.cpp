// minimum and maximum and average

#include<stdio.h>
int main()
{
	int n, max, min , avg, i;
	printf("What is the length :");
	scanf("%d", &n);
	int arr[n];
	for(i=0; i<n; i++)
		scanf("%d", &arr[i]);
	
	for(i=0 ; i<n-1 ; i++)
	{
		min=arr[0];
		if(min>arr[i+1])
		min=arr[i+1];
		max=arr[0];
		if(max < arr[i+1])
		max=arr[i+1];
	}
	avg=(max+min)/2;
	printf("Minimum = %d \n max= %d\n average= %d",min,max,avg);
	return 0;
}


