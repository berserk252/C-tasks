#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main( void )
{
	char s1[100];
	char s2[100];
	int num;
	
	puts("Enter two strings :");
	gets(s1);
	gets(s2);
	num = strcmp(s1, s2);
	
	switch(num)
	{
		case 0 : 
			puts("The strings are equal");
			break;
		
		case 1 :
			puts("The first string are longer than second");
			break;	
			
		case -1 :
			puts("The first string are smaller than second");		
			break;
	}
		
	return 0;
}

