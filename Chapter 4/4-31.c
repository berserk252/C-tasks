#include<stdio.h>

int main( void )
{    
	
	int boof = 1, num = 5;
	
	for( int line = num;  line != 0 ; line--)
	{
		
		for( int space = line - 1; space != 0 ; space--)
		{
			printf(" ");
		
		}		
		
		for( int star = boof ; star >= 1 ; star -= 1 )
		{
			
			printf("*");
		}

		printf("\n");
		
		boof += 2;
	}
	
	
	for( int line = 1, boof = num + 2; line <= num - 1 ; line++)
	{
		
		for( int space = line; space != 0 ; space--)
		{
			printf(" ");
		
		}		
		
		for( int star = boof ; star >= 1 ; star -= 1 )
		{
			
			printf("*");
		}

		printf("\n");
		
		boof -= 2;
	}
	return 0;
}
