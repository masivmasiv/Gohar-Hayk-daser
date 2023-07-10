#include <stdio.h>
int main()
{
	char sym = 0;
	printf ("enter from A to Z! \n");
	scanf ("%c" , &sym );
	if (sym >= 'A' && sym <= 'Z')
	{
		printf ("%c \n" , sym + 32 );
	}
	else
	{
		printf("error!!! \n");
	}
}
