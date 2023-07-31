#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

#define SIZE 10

int main( void )
{
	char *string[SIZE] = {"Berlin", "London", "Moscow", "Madrid", "Tokyo",
				 "Paris", "Rome", "Yerevan", "Beirut", "Washington"};
	char hold[50];
	int a, b;
	
	for(int counter = 0; counter <= SIZE - 1; counter++)
	{
		
		a = strcmp(string[counter], string[counter + 1]);
		b = strcmp(string[counter + 1], string[counter]);
		
		for(int count = 0; count <= SIZE - 1;count++)
		{
			
			
			if(a > b)
			{
				strcpy(hold, string[count]);
				string[count] = string[count + 1];
				string[count + 1] = hold;
			}
			
			 
			
		}
	}

	
	for(int count = 0; count <= SIZE - 1; count++)
	{
		printf("%s\n", string[count]);	
	}
		
	return 0;
}



