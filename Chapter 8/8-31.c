#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

char *strChr(const char *s, int c);
size_t strCspn(const char *s1, const char *s2);
size_t strSpn(const char *s1, const char *s2);
char * strPrbk(const char *s1, const char *s2);
char *strRChr(const char *s, int c);
char *strStr(const char *s1, const char *s2);
char *strTok(char *s1, const char *s2);


int main( void )
{
	char s1[] = {"ARMEN MIRAKYAN BAGRATI aaaa"}, s2[] = {" "}, *ptr;
	char c = 'M';
	int a;
	
	ptr = strTok(s1, s2);
	
	while(ptr != NULL)
	{
		printf("%s\n", ptr);
		ptr = strTok(NULL, s2);
	}
	
	
	return 0;
}

char *strChr(const char *s, int c)
{
	char *ptr;
	int counter = 0;
	
	while(s[counter] != '\0')
	{
		if(s[counter] == c)
		{
			ptr = s + counter;
			return ptr;
		}
		counter++;
	}
	
	return ptr;
}

size_t strCspn(const char *s1, const char *s2)
{
	int counter1 = 0, counter2 = 0;
	
	while(s1[counter1] != '\0')
	{
		while(s2[counter2] != '\0')
		{
			if(s1[counter1] == s2[counter2])
			{
				return counter1;
			}
			
			counter2++;
		}
		
		counter2 = 0;
		counter1++;
	}
	
	return 0;
}

size_t strSpn(const char *s1, const char *s2)
{
	
	int counter = 0;
	
	while(s1[counter] != '\0')
	{
		if(s1[counter] != s2[counter])
		{
			return counter;
		}
		
		counter++;
	}
	
	return counter;
}

char* strPrbk(const char *s1, const char *s2)
{
	char *ptr;
	int counter1 = 0, counter2 = 0;
	
	while(s1[counter1] != '\0')
	{
		while(s2[counter2] != '\0')
		{
			if(s1[counter1] == s2[counter2])
			{
				ptr = s1 + counter1;
				return ptr;
			}
			
			counter2++;
		}
		
		counter2 = 0;
		counter1++;
	}
	
	return ptr;
}

char *strRChr(const char *s, int c)
{
	char *ptr;
	int counter = 0;
	
	while(s[counter] != '\0')
	{
		if(s[counter] == c)
		{
			ptr = s + counter;
		}
		counter++;
	}
	
	return ptr;
}

char *strStr(const char *s1, const char *s2)
{
	int counter1 = 0, counter2 = 0, count = 0, len = 0;
	char *ptr;
	
	len = strlen(s2);
	
	while(s1[counter1] != '\0')
	{
		while(s2[counter2] != '\0')
		{
			if(s1[counter1] == s2[counter2])
			{
				count++;
			}
			
			if(count == len)
			{
				ptr = s1 + (counter1 - 1);
				return ptr;
			}
			counter2++;
		}
		
		counter2 = 0;
		counter1++;
	}
	
	return ptr;
}

char *strTok(char *s1, const char *s2)
{
	char *bPtr;
	static char *ePtr = " ";
	int counter1 = 0, counter2 = 0;
	
	if(*ePtr != '\0')
	{
		bPtr = s1;
		
		while(s1[counter1] != '\0')
		{
			
			while(s2[counter2] != '\0')
			{
				if(s1[counter1] == s2[counter2])
				{
					ePtr = &(s1[counter1]);
					if(s1[counter1] != '\0')
					{
						s1[counter1] = '\0';
					}
					
					return bPtr;
				}
				counter2++;
			}
		
			counter2 = 0;
			counter1++;
		}
	}
	else
	{
		bPtr = ePtr + 1;
		
		if(*bPtr == ' ' || *bPtr == '\0')
		{
			return NULL;
		}
		
		while(1)
		{
			
			
			while(s2[counter2] != '\0')
			{
				if(bPtr[counter1] == '\0')
				{
					ePtr = &(bPtr[counter1]);
					ePtr[1] = '\0';
					return bPtr;
				}
				
				if(bPtr[counter1] == s2[counter2])
				{
					ePtr = &(bPtr[counter1]);
					if(bPtr != '\0')
					{
						bPtr[counter1] = '\0';
					}
					return bPtr;
				}
				counter2++;
			}
		
			counter2 = 0;
			counter1++;
		}
	}
	
	return bPtr;
}

