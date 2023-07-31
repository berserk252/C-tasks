#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>
#include<string.h>

int main( void )
{
	//articl noun verb preposition article noun
	const char *article[5] = {"the", "a", "one", "some", "any"};
	const char *noun[5] = {"boy", "girl", "dog", "town", "car"};
	const char *verb[5] = {"drove", "jumped", "ran", "walked", "skipped"};
	const char *preposition[4] = {"to", "from", "over", "on"};
	size_t size;
	
	srand(time(NULL));
	
	for(int count = 1; count <= 20; count++)
	{
		char s1[100] = {' '};
		
		strcat(s1, article[0 + rand() % 5]);
		
		s1[1] = toupper(s1[1]);
		
		size = strlen(s1);
		
		s1[size] = ' ';
		
		size++;
		
		strcat(s1, noun[0 + rand() % 5]);
		
		size = strlen(s1);
		
		s1[size] = ' ';
		
		size++;
		
		strcat(s1, verb[0 + rand() % 5]);
		
		size = strlen(s1);
		
		s1[size] = ' ';
		
		size++;
		
		strcat(s1, preposition[0 + rand() % 4]);
		
		size = strlen(s1);
		
		s1[size] = ' ';
		
		size++;
		
		strcat(s1, article[0 + rand() % 5]);
		
		size = strlen(s1);
		
		s1[size] = ' ';
		
		size++;
		
		strcat(s1, noun[0 + rand() % 5]);
		
		size = strlen(s1);
		
		s1[size] = '.';
		
		size++;
		
		s1[++size] = '/0';
		
		printf("%s\n", s1);
	}
	
	
	return 0;
}

