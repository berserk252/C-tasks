#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

int main( void )
{
	char s1[100];
	char s2[100];
	char s3[100];
	int count = 0;
	
	printf("Enter Sentences:");
	gets(s1);
	gets(s2);
	gets(s3);
	int a;
	
	printf("............\n");
	
	a = strlen(s1);
	if(s1[a - 2] == 'E' && s1[a - 1] == 'D' || s1[a - 2] == 'e' && s1[a - 1] == 'd')
	{
		printf("%s", s1);
	}
	
	a = strlen(s2);
	if(s2[a - 2] == 'E' && s2[a - 1] == 'D' || s2[a - 2] == 'e' && s2[a - 1] == 'd')
	{
		printf("%s", s2);
	}
	
	a = strlen(s3);
	if(s3[a - 2] == 'E' && s3[a - 1] == 'D' || s3[a - 2] == 'e' && s3[a - 1] == 'd')
	{
		printf("%s", s3);
	}
	
	return 0;
}

