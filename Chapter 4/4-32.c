#include<stdio.h>

int main( void )
{    	
	int boof = 1, num;
	
	printf("Enter odd num between 1-19: ");
	scanf("%d", &num);
	
	while(num % 2 == 0 || num > 19 || num < 1 )
	{
		printf("You entered wrong num.\n");
		printf("Enter odd num between 1-19: ");
		scanf("%d", &num);
	}
	

	for( int line = num / 2 + 1;  line != 0 ; line--)
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
	
	
	for( int line = 1, boof = num - 2; line <= num / 2  ; line++)
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
