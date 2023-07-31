#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int isDigit(int number);
int isAlpha(int number);
int isAlnum(int number);
int isxDigit(int number);
int isLower(int number);
int isUpper(int number);
int toLower(int number);
int toUpper(int number);
int isSpace(int number);
int isCntrl(int number);
int isPunct(int number);
int isPrint(int number);
int isGraph(int number);


int main( void )
{
	int number;
	int hold = 0;
	
	srand(time(NULL));
	
	number = 0 + rand() % 255;
	
	printf("Your number is %d, in ASCII table '%c'\n", number, number);
	
	hold = isDigit(number);
	if(hold == 1)
	{
		printf("Your number is digit\n");
	}
	
	hold = isAlpha(number);	
	if(hold == 1)
	{
		printf("Number is letter\n");
	}
	
	
	hold = isAlnum(number);
	if(hold == 1)
	{
		printf("Number is digit or letter\n");
	}
	
	hold = isxDigit(number);
	if(hold == 1)
	{
		printf("Number is a heximedical\n");
	}
	
	hold = isLower(number);
	if(hold == 1)
	{
		printf("Your number is a lowercase letter\n");
	}
	
	hold = isUpper(number);
	if(hold == 1)
	{
		printf("Your number is upercase letter\n");
	}
	
	hold = toLower(number);
	if(hold != number)
	{
		printf("'%c' converted to '%c'\n", number, hold);
	}
	
	hold = toUpper(number);
	if(hold != number)
	{
		printf("'%c' converted to '%c'\n", number, hold);
	}
	
	hold = isSpace(number);
	if(hold == 1)
	{
		printf("Your number is space symbol\n");
	}
	
	hold = isCntrl(number);
	if(hold == 1)
	{
		printf("Your number is control symbol\n");
	}
	
	hold = isPunct(number);
	if(hold == 1)
	{
		printf("Your number is punctuation\n");
	}
	
	hold = isPrint(number);
	if(hold == 1)
	{
		printf("Your number is visible symbol with space\n");
	}
	
	hold = isGraph(number);
	if(hold == 1)
	{
		printf("Your number is visible symbol without space\n");
	}
	
	
	return 0;
}

int isDigit(int number)
{
	if(number >= 48 && number <= 57)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


int isAlpha(int number)
{
	if(number >= 65 && number <= 90 || number >= 97 && number <= 122)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


int isAlnum(int number)
{
	if(number >= 48 && number <= 57 || number >= 65 && number <= 90 || number >= 97 && number <= 122)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isxDigit(int number)
{
	if(number >= 48 && number <= 57 || number >= 65 && number <= 68 || number == 70)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isLower(int number)
{
	if(number >= 97 && number <= 122)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isUpper(int number)
{
	if(number >= 65 && number <= 90)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int toLower(int number)
{
	if(number >= 65 && number <= 90)
	{
		return number + 32;
	}
	else 
	{
		return number;
	}
}

int toUpper(int number)
{
	if(number >= 97 && number <= 122)
	{
		return number - 32;
	}
	else
	{
		return number;
	}
}

int isSpace(int number)
{
	if(number >= 0 && number <= 32 || number == 127)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isCntrl(int number)
{
	if(number >= 0 && number <= 31 || number == 127)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isPunct(int number)
{
	if(number >= 33 && number <= 47 || number >= 58 && number <= 64 || number >= 91 && number <= 96 || number >= 123 && number <= 126)
	{
		return 1;
	}
	else
	{ 
		return 0;
	}
}

int isPrint(int number)
{
	if(number >= 32 && number != 127)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isGraph(int number)
{
	if(number >= 31 && number != 127)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

