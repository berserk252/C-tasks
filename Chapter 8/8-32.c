#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

void *memCpy(void *s1, const void *s2, size_t n);
void *memMove(void *s1, const void *s2, size_t n);
void *memCmp(const void *s1, const void *s2, size_t n);
void *memChr(const void *s, int c, size_t n);
void *memSet(const void *s, int c, size_t n);

int main( void )
{
	char s1[] = "BBBBBBBBBBBBBBBBBB", s2[] = "aass", *sPtr;
	char c = 'A';
	int n = 4;
	int a;
	
	sPtr = memSet(s1, c, n);
	
	printf("%s\n", sPtr);
	
	return 0;
}

void *memCpy(void *s1, const void *s2, size_t n)
{
	char *str1 = s1, *str2 = s2;
	int counter = 0;
	
	
	while( counter != n)
	{
		*str1 = *str2;
		str1++;
		str2++;
		counter++;
	}
	
	return s1;
}

void *memMove(void *s1, const void *s2, size_t n)
{
	char *str1 = s1, *str2 = s2, strAr[50];
	
	for( int counter = 0; counter != n; counter++)
	{
		strAr[counter] = *str2;
		str2++;
	}
	
	for( int counter = 0; counter != n; counter++)
	{
		*str1 = strAr[counter];
		str1++;
	}
	
	return s1;
}

void *memCmp(const void *s1, const void *s2, size_t n)
{
	char *str1 = s1, *str2 = s2;
	
	for(int counter = 0; counter <= n && str1 != '\0'; counter++)
	{
		if(*str1 != *str2)
		{
			if(*str1 > *str2)
			{
				return 1;
			}
			
			if(*str1 < *str2)
			{
				return -1;
			}
			
			
		}
		
		str1++;
		str2++;
	}
	
	if(*str1 == *str2)
	{
		return 0;
	}
}


void *memChr(const void *s, int c, size_t n)
{
	char *str = s;
	
	for(int counter = 0; counter != n && str != '\0'; counter++)
	{
		if(*str == c)
		{
			return str;
		}
		
		str++;
	}
	
	return NULL;
}

void *memSet(const void *s, int c, size_t n)
{
	char *str = s;
	
	for(int counter = 0; counter != n && *str != '\0'; counter++)
	{
		str[counter] = c;
	}
	
	return s;
}

