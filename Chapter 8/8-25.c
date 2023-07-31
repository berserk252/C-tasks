#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

int main( void )
{
	int number;
	
	srand(time(NULL));
	
	for(int counter = 0; counter <= 100; counter++)
	{
		number = 0 + rand() % 255;
		
		printf("Number is %d - ASCII code is %c\n", number, number);
	}
	
	return 0;
}

