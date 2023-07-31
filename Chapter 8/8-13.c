#include<stdio.h>
#include<string.h>

char printLatinWord(char *s);

int main( void )
{
	char s[100];
	char *sPtr;
	
	gets(s);
	
	sPtr = strtok(s, " ");
	
	while(sPtr != NULL)
	{
		printLatinWord(sPtr);
		sPtr = strtok(NULL, " ");
	}
	
	return 0;
}

char printLatinWord(char *s)
{
	printf("%s%cay ", s + 1, *s);
}

