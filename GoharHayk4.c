#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	printf("enter the first number \n ");
	scanf("%i" , &a);
	printf("enter the second number \n ");
	scanf("%i" , &b);
	if( a > b )
	{
		printf("%i \n " , a );
	}
	else
	{
		printf("%i \n " , b );
	}
}
