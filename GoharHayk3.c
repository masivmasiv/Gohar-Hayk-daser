#include <stdio.h>
int main()
{
	char sym; 
	printf("enter the symbol if you want to see vowel or consonant \n");
	scanf("%c" , &sym);
	switch(sym)
	{
	case 'A':
	case 'a':
	case 'E':
	case 'e':
	case 'I':
	case 'i':
	case 'O':
	case 'o':
	case 'U':
	case 'u':
	case 'Y':
	case 'y':
		printf("vowel \n ");
		break;	
	case 'B':
	case 'b':
	case 'C':
        case 'c':
	case 'D':
	case 'd':
	case 'F':
        case 'f':
	case 'G':
	case 'g':
	case 'H':
        case 'h':
	case 'J':
	case 'j':
	case 'K':
        case 'k':
	case 'L':
	case 'l':
	case 'M':
        case 'm':
	case 'N':
	case 'n':
	case 'P':
        case 'p':
	case 'Q':
	case 'q':
	case 'R':
        case 'r':
	case 'S':
	case 's':
	case 'T':
        case 't':
	case 'V':
	case 'v':
	case 'W':
        case 'w':
	case 'X':
	case 'x':
	case 'Z':
        case 'z':
		printf("consonant \n ");
		break;
	default:
		printf("not found \n");
	}

}
