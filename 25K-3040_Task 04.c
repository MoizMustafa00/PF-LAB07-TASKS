#include<stdio.h>
int main()
{
	char str[100], res[100];
	printf("Enter the string: ");
	scanf("%[^\n]", str);
	
	int i, j=0;
	for(i=0; str[i]!='\0'; i++)
	{
		if(str[i] < '0' || str[i] > '9')
		{
			res[j] = str[i];
			j++;
		}
	}
	res[j] = '\0';
	printf("String without numeric character: %s\n", res);
	return 0;
}
