#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

int tokens(char s[]);

int main( void )
{
	int counter = 0;
	char s[100];
	
	printf("Enter the strings:");
	gets(s);
	
	counter = tokens(s);
	
	printf("the string/s have %d tokens", counter);
		
	return 0;
}

int tokens(char s[])
{
	int counter = 0;
	char *tokenPtr;
	
	tokenPtr = strtok(s, " \n");
	
	while(tokenPtr != NULL)
	{
		tokenPtr = strtok(NULL, " \n");
		counter++;
	}
	
	return counter;
}

