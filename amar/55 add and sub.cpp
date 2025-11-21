//program to add and subtract 2 integers using functions 
#include<stdio.h>
int add (int a, int b);
int sub (int a,int b);
int main()
{
	int a,b;
	printf("enter the numbers" );
	scanf(" %d %d", &a, &b);
	printf("%d %d \n",a,b);
	printf("%d + %d = %d\n",a,b,add(a,b));
    printf("%d - %d = %d\n",a,b,sub(a,b));
	printf("%d - %d = %d\n",a,b,sub(b,a));	
	return 0;
}
int add( int a, int b){
	return a + b;
}
int sub( int a, int b){
	return a - b;
}
