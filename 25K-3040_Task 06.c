#include<stdio.h>
int main()
{
	int arr1[5], arr2[5], arr3[10];
	int i, j;
	printf("Enter Array 1:\n");
	for(i=0; i<5; i++)
	{
		printf("Element %d = ", i+1);
		scanf("%d", &arr1[i]);
	}
	printf("\nEnter Array 2:\n");
	for(i=0; i<5; i++)
	{
		printf("Element %d = ", i+1);
		scanf("%d", &arr2[i]);
	}
	for(i=0; i<5; i++)
	{
		arr3[i] = arr1[i];
	}
	for(j=0; j<5; j++)
	{
		arr3[i+j] = arr2[j];
	}
	printf("\nMerged Array:\n");
	for(i=0; i<10; i++)
	{
		printf("Element %d = %d\n", i+1, arr3[i]);
	}
	return 0;
}
