#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

char *AStringCopy(char s1[], const char s2[]);
char *PStringCopy(char *s1, const char *s2);
char *AStringNCopy(char s1[], const char s2[], int n);
char *PStringNCopy(char *s1, const char *s2, int n);

char *AStringCat(char s1[], const char s2[]);
char *PStringCat(char s1[], const char s2[]);
char *AStringNCat(char s1[], const char s2[], int n);
char *PStringNCat(char s1[], const char s2[], int n);

int main( void )
{
	char sPtr1[150] = {"abcdegjkl"}, sPtr2[150] = {"kkkkk"};
	int n = 2;
	
	PStringNCat(sPtr1, sPtr2, n);
	
	printf("%s", sPtr1);
	
	return 0;
}

char *AStringCopy(char s1[], const char s2[])
{
	int counter = 0;
	
	while(s2[counter] != '\0')
	{
		s1[counter] = s2[counter];
		counter++;
	}
	
	s1[counter] = '\0';
	
	return s1;
	
}

char *PStringCopy(char s1[], const char s2[])
{
	int counter = 0;
	
	while(*(s2 + counter) != '\0')
	{
		*(s1 + counter) = *(s2 + counter);
		counter++;
		
	}
	
	*(s1 + counter) = '\0';
}

char *AStringNCopy(char *s1, const char *s2, int n)
{	
	int counter = 0;
	
	while(n != 0 && s2[counter] != '\0')
	{
		s1[counter] = s2[counter];
		counter++;
		n--;
	}
	
	s1[counter] = '\0';
	
	return s1;
}

char *PStringNCopy(char *s1, const char *s2, int n)
{
	int counter = 0;
	
	while(n != 0 && *(s2 + counter) != '\0')
	{
		*(s1 + counter) = *(s2 + counter);
		counter++;
		n--;
	}
	
	*(s1 + counter) = '\0';
	
	return s1;
}

char *AStringCat(char s1[], const char s2[])
{
	int counter = 0;
	
	int len = strlen(s1);
	
	while(s2[counter] != '\0')
	{
		s1[len] = s2[counter];
		
		len++;
		counter++;	
	}
	
	s1[len] = '\0';
	
	return s1;
}

char *PStringCat(char s1[], const char s2[])
{
	int counter = 0;
	
	int len = strlen(s1);
	
	while(*(s2 + counter) != '\0')
	{
		*(s1 + len) = *(s2 + counter);
		
		len++;
		counter++;	
	}
	
	*(s1 + len) = '\0';
	
	return s1;
}

char *AStringNCat(char s1[], const char s2[], int n)
{
	int counter = 0;
	
	int len = strlen(s1);
	
	while(n != 0 && s2[counter] != '\0')
	{
		s1[len] = s2[counter];
		
		len++;
		counter++;	
		n--;
	}
	
	s1[len] = '\0';
	
	return s1;
}

char *PStringNCat(char s1[], const char s2[], int n)
{
	int counter = 0;
	
	int len = strlen(s1);
	
	while(n != 0 && *(s2 + counter) != '\0')
	{
		*(s1 + len) = *(s2 + counter);
		
		len++;
		counter++;
		n--;	
	}
	
	*(s1 + len) = '\0';
	
	return s1;
}

