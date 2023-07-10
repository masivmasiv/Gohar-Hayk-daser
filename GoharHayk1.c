#include <stdio.h>
int main()
{	
	float x = 0;
	float y = 0;
	printf("enter your x number! \n");
	scanf("%f", &x );
	printf("enter your y number! \n");
	scanf("%f", &y );
	printf("%f \n"  , x * y + 21 * x / y - 200 );
}
