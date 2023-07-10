#include <stdio.h>
int main()
{
	char sym = 0;
	printf("enter what you want! \n");
	scanf("%c", &sym);
		if ( sym >= '0' && sym <= '9') 
		{
			printf("true \n" );
		}
		else 
		{
			printf("false \n" );
		}	
				
}
