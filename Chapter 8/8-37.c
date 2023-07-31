#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

char tab(char *s);

int main( void )
{
	char s[] = "95559.87";
	
	tab(s);
	
	return 0;
}

char tab(char *s)
{
	char sCopy[100] = "";
	int counter = 0;
	
	for(; s[counter] != '\0'; counter++)
	{
	}
	
	
	for(int count = 0; count + counter != 8; count++)
	{
		sCopy[count] = '*';
	}
	
	strcat(sCopy, s);
	
	printf("%s\n--------\n12345678", sCopy);
	
}

