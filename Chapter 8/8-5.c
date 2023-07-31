#include<stdio.h>
#include<ctype.h>

int main( void )
{
	char c;
	
	if(isdigit(getchar()))
	{
		printf("Your symbol is a digit\n");
	}
	else
	{
		printf("Your symbol is not a digit\n");
	}
	
	if(isalpha(getchar()))
	{
		printf("Your symbol is a letter\n");
	}
	else
	{
		printf("Your symbol is not a letter\n");
	}
	
	if(isalnum(getchar()))
	{
		printf("Your symbol is a digit or a letter\n");
	}
	else
	{
		printf("Your symbol is not a digit or a letter\n");
	}
	
	if(isxdigit(getchar()))
	{
		printf("Your symbo is in hexadecimal\n");
	}
	else
	{
		printf("Your symbol is not in hexadecimal\n");
	}

	if(islower(getchar()))
	{
		printf("Your symbol is a lowercase letter\n");
	}
	else
	{
		printf("Your symbol is not a lowercase letter\n");
	}
	
	if(isupper(getchar()))
	{
		printf("Your symbol is a uppercase letter\n");
	}
	else
	{
		printf("Your symbol is not a uppercase letter\n");
	}
	
	if(islower(getchar()))
	{
		printf("Your symbol is a lowercase letter\n");
	}
	else
	{
		printf("Your symbol is not a lowercase letter\n");
	}
	
	scanf("%c", &c);
	
	if(tolower(c))
	{
		printf("Your symbol converted to a '%c'\n", c);
	}
	else
	{
		printf("Your symbol cant converted to a lowercase letter\n");
	}
	
	scanf("%c", &c);
	
	if(toupper(c))
	{
		printf("Your symbol converted to a '%c'\n", c);
	}
	else
	{
		printf("Your symbol cant converted to a uppercase letter\n");
	}
	
	if(isspace(getchar()))
	{
		printf("Your symbol is a space letter\n");
	}
	else
	{
		printf("Your symbol is not a space letter\n");
	}
	
	if(iscntrl(getchar()))
	{
		printf("Your symbol is a control letter\n");
	}
	else
	{
		printf("Your symbol is not a control letter\n");
	}
	
	if(ispunct(getchar()))
	{
		printf("Your symbol is a visible letter\n");
	}
	else
	{
		printf("Your symbol is not a visible letter\n");
	}
	
	if(isprint(getchar()))
	{
		printf("Your symbol is a visible letter (- space)\n");
	}
	else
	{
		printf("Your symbol is not a visible letter (- space)\n");
	}
	
	if(isgraph(getchar()))
	{
		printf("Your symbol is a visible letter (+ space)\n");
	}
	else
	{
		printf("Your symbol is not a visible letter (+ space)\n");
	}
	
	return 0;
}

