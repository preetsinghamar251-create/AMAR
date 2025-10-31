//program to display the string input by user
#include<stdio.h>
int main()
{
	char str[100],i;
	printf("enter the string");
	scanf("%s",&str);
	i=0;
	while(str[i]!='\0')
	{
		printf("%c",str[i]);
		i++;
	}
}
