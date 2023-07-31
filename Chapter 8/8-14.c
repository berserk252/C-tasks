#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<ctype.h>

int main( void )
{
	char s1[30];
	char s2[30] = {' '};
	char *nPtr;
	int code = 0;
	long number = 0;
	char *remaindPtr;
	
	printf("Enter your phone number:");
	gets(s1);
	
	nPtr = strtok(s1, " ");
	code = atoi(nPtr);
	
	for(int a = 0; a <= 1; a++)
	{
		nPtr = strtok(NULL, "-");
		strcat(s2, nPtr);
	}
	
	number = strtol(s2, &remaindPtr, 0);
	
	printf("Your country code is (%d)\nYour phone number is(%ld)", code, number);
	
	
	
	
	
	
	return 0;
}

