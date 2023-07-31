#include<stdio.h>

int main( void )
{	
	int num1, num2;
	
	for(int num = 1; num <= 100 ; num++ )
	{
		num1 = num / 10;
		num2 = num % 10;
		
		printf("%d ", num);
		
		switch (num1)
		{
			case 1 :
				printf("%s", "X");
			break;	
			
			case 2 :
				printf("%s", "XX");
			break;
			
			case 3 :
				printf("%s", "XXX");
			break;
			
			case 4 :
				printf("%s", "XL");
			break;
			
			case 5 :
				printf("%s", "L");
			break;
			
			case 6 :
				printf("%s", "LX");
			break;
			
			case 7 :
				printf("%s", "LXX");
			break;
			
			case 8 :
				printf("%s", "LXXX");
			break;
			
			case 9 :
				printf("%s", "XC");
			break;
			
			case 10 :
				printf("%s", "C");
			break;
		}
		
		switch (num2)
		{
			case 1 :
				printf("%s", "|");
			break;
			
			case 2 :
				printf("%s", "||");
			break;
			
			case 3 :
				printf("%s", "|||");
			break;
			
			case 4 :
				printf("%s", "|V");
			break;
			
			case 5 :
				printf("%s", "V");
			break;
			
			case 6 :
				printf("%s", "V|");
			break;
			
			case 7 :
				printf("%s", "V||");
			break;
			
			case 8 :
				printf("%s", "V|||");
			break;
			
			case 9 :
				printf("%s", "|X");
			break;
		}
		printf("\n");
	}
	return 0;
}
