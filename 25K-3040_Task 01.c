#include<stdio.h>
int main()
{
	int sum=0, n=0;
	printf("Enter the number of elements in the array:\n");
	scanf("%d", &n);
	int arr[n];
	printf("Enter the values for the array:\n");
	int i=0;
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
		sum+=arr[i];
	}
	printf("The sum of the elements is: %d", sum);
	return 0;
}

