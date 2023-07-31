#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

int AstringCompare(const char s1[], const char s2[]);
int PstringCompare(const char *s1, const char *s2);
int AstringNCompare(const char s1[], const char s2[], int n);
int PstringNCompare(const char *s1, const char *s2, int n);


int main( void )
{
	char s1[100] = {"HAPPY NEW YEAR"}, s2[100] = {"HAPPY NEW YEAR"};
	int a, n = 5;
	
	a = PstringNCompare(s1, s2, n);
	
	printf("%d", a);
	
	
	return 0;
}

int AstringCompare(const char s1[], const char s2[])
{
	int counter = 0;
	
	for(; s1[counter] != '\0'; counter++)
	{
		if(s1[counter] != s2[counter])
		{
			if(s1[counter] > s2[counter])
			{
				return 1;
			}
			else
			{
				return -1;
			}
		}
	}
	
	if(s1[counter] != s2[counter])
	{
		return -1;
	}
	else
	{
		return 0;
	}
}

int PstringCompare(const char *s1, const char *s2)
{	
	for(; s1[0] != '\0';)
	{
		if(s1[0] != s2[0])
		{
			if(s1[0] > s2[0])
			{
				return 1;
			}
			else
			{
				return -1;
			}
		}
		
		s1++;
		s2++;
	}
	
	if(s1[0] != s2[0])
	{
		return -1;
	}
	else
	{
		return 0;
	}
}

int AstringNCompare(const char s1[], const char s2[], int n)
{
	int counter = 0;
	
	for(; s1[counter] != '\0' && n != 0; counter++)
	{
		if(s1[counter] != s2[counter])
		{
			if(s1[counter] > s2[counter])
			{
				return 1;
			}
			else
			{
				return -1;
			}
		}
		
		n--;
	}
	
	if(s1[counter] != s2[counter])
	{
		return -1;
	}
	else
	{
		return 0;
	}
}

int PstringNCompare(const char *s1, const char *s2, int n)
{
	for(; s1[0] != '\0' && n != 0;)
	{
		if(s1[0] != s2[0])
		{
			if(s1[0] > s2[0])
			{
				return 1;
			}
			else
			{
				return -1;
			}
		}
		
		s1++;
		s2++;
		n--;
	}
	
	if(s1[0] != s2[0])
	{
		return -1;
	}
	else
	{
		return 0;
	}
}
