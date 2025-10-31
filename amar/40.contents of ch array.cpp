//program todisplay the contents in a character array
#include<stdio.h>
int main()
{
	printf("display the contents of an array.\n");
	int i;
	char a[5]={'a','e','i','o','u'};
	printf("the array contains vowels:");
	for(i=0;a[i]!='\0';i++)
	{
		printf("%c",a[i]);
	}
	return 0;
}
