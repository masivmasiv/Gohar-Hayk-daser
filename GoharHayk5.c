#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("enter the first number \n ");
	scanf("%i" , &a);
	printf("enter the second number \n ");
	scanf("%i" , &b);
	printf("enter the third number \n ");
	scanf("%i" , &c);
	if( a > b  && b > c )
	{
		printf("the biggest number is\t %i \n  " , a );
	}
	else if( a < b && b > c )
	{
		printf("the biggest number is\t %i \n  " , b );
	}
	else
	{
		printf("the biggest number is\t %i \n " , c );
	}
}
