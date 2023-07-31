#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<ctype.h>

void token(char *tPtr);

int main( void )
{
	char s[100];
	char *tokenPtr;
	
	printf("Enter the string(whitout punctuation) :");
	gets(s);
	
	tokenPtr = strtok(s, " ");
	
	token(tokenPtr);
	
	printf("%s", tokenPtr);
	
	return 0;
}

void token(char *tPtr)
{
	tPtr = strtok(NULL, " ");
	
	if(tPtr != NULL)
	{
		token(tPtr);
	}
	else
	{
		return;
	}
	
	printf("%s ", tPtr);
}

