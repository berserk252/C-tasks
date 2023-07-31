#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

int getChar(void);
char *getS(char *s);
int putChar(int c);
int putS(const char *s);

int main( void )
{
	char s[50];
	char c = 'd';
	int a = 0;
	
	a = getchar();
	printf("\nGetchar = %d\n", a);
	
	getS(s);
	printf("\nGets = %s\n", s);
	
	
	printf("\nPutChar = ");
	putChar(c);
	putS("");
	
	putS(s);
	
	
	return 0;
}

int getChar(void)
{
	char a;
	
	scanf("%c", &a);
	
	return a;
}

char *getS(char *s)
{
	int len = 0;
	
	scanf("%s", s);
	
	len = strlen(s);
	
	s[len + 1] = '\0';
	
	return s;
}

int putChar(int c)
{
	printf("%c", c);
	
	return c;
}


int putS(const char *s)
{
	printf("%s\n", s);
}

