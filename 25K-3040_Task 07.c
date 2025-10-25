#include<stdio.h>
int main()
{
	int arr[10];
	int i, num=0, index=-1;
	printf("Enter an Array:\n");
	for(i=0; i<10; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("\nEnter the number to search: ");
	scanf("%d", &num);
	for(i=0; i<10; i++)
	{
		if(arr[i] == num)
		{
			index = i;
			break;
		}
	}
	if(index != -1)
	{
		printf("Index = %d\n", index);
	}
	else
	{
		printf("Index = %d\n", index);
	}
	return 0;
}
