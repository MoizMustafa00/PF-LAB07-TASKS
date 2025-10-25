#include<stdio.h>
int main()
{
	int n=0;
	printf("No of Elements in the Array: ");
	scanf("%d", &n);
	int arr[n];
	int i;
	for(i=0; i<n; i++)
	{
		printf("Element %d = ", i);
		scanf("%d", &arr[i]);
	}
	for(i=0; i<n; i++)
	{
		arr[arr[i]%n] += n;
	}
	
	int count=0;
	printf("Numbers in array occuring more than once: ");
	for(i=0; i<n; i++)
	{
		if(arr[i]/n > 1)
		{
			printf("%d ", i);
			count++;
		}
	}
	if(count==0)
	{
		printf("None\n");
	}
	return 0;
}
