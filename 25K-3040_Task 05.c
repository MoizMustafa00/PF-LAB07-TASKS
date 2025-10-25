#include<stdio.h>
int main()
{
	char str[50];
	printf("Enter a string:\n");
	scanf("%[^\n]", str);
	
	int i, count=0;
	for(i=0; str[i]!='\0'; i++)
	{
		if(str[i]==' ' || str[i]=='\t' || str[i]=='\n')
		{
			count++;
		}
	}
	printf("Number of whitespace characters = %d", count);
	return 0;
}
