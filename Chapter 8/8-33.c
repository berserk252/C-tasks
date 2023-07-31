#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

int AstrLen(const char *s1);
int PstrLen(const char *s1);

int main( void )
{
	char *s1 = "HAPPY NEW YEAR";
	int num;
	
	num = PstrLen(s1);
	
	printf("%d\n", num);
	
	return 0;
}

int AstrLen(const char *s1)
{
	int num = 0;
	
	while(s1[num] != '\0')
	{
		num++;
	}
	
	return num;
	
	
}

int PstrLen(const char *s1)
{
	int num = 0;
	
	while(*s1 != '\0')
	{
		s1++;
		num++;
	}
	
	return num;
}
