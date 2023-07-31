#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<ctype.h>

char *search(char s1[], char s2[], char *searchPtr);

int main( void )
{
	char s1[50];
	char s2[50];
	char *searchPtr;
	
	printf("Enter a string:");
	gets(s1);
	
	printf("Enter a search string:");
	gets(s2);
	
	searchPtr = search(s1, s2, searchPtr);
	
	search(searchPtr + 1, s2, searchPtr);
	
	return 0;
}

char *search(char s1[], char s2[], char *searchPtr)
{
	searchPtr = strstr(s1, s2);
	
	if(searchPtr != NULL)
	{
		printf("%s\n", searchPtr);
	}
	else
	{
		printf("Not found the search text\n");
	}
	
	return searchPtr; 
}

