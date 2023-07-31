#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

void numberWriting(long);

int main( void )
{
	long number = 250250258;
	numberWriting(number);
	
	return 0;
}

void numberWriting(long number)
{
	char *endPtr;
	char *singleDig[10] = {"","ONE", "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT", "NINE"};
	char *tenDig[11] = {"", "ELEVEN", "TWELVE", "THIRTEEN", "FOURTEEN", "FIFTEEN", "SIXTEEN", "SEVENTEEN", "EIGHTEEN", "NINETEEN"}; 
	char *dubleDig[10] = { " ", "TEN", "TWENTY", "THIRDY", "FOURTY", "FIFTY", "SIXTY", "SEVENTY", "EIGHTY", "NINETY"};
	int counter = 0, num = number;
	
	for(int a = 10; num  != 0; counter++)
	{
		num /= a;
	}
	
	printf("%d\n", counter);
	printf("Number is %ld\n", number);
	
	switch(counter)
	{
		case 1 :
			printf("%s\n", singleDig[number]);
			break;
			
		case 2 :
			if( number < 20 && number != 10)
			{
				printf("%s\n", tenDig[number % 10]);
			}
			else
			{
				printf("%s ", dubleDig[number / 10]);
				
				if(number % 10 != 0)
				{
					printf("%s\n", singleDig[number % 10]);
				}
				
			}
			break;	
		
		case 3 :
			printf("%s HUNDRED ", singleDig[number / 100]);
		
			if((number % 100) / 10 != 0)
			{
				if( number % 100 < 20 && number % 100 != 10)
				{
					printf("%s\n", tenDig[(number % 100) % 10]);
					break;
				}
				else
				{
					printf("%s ", dubleDig[(number % 100) / 10]);
					if((number % 100) % 10 != 0)
					{
						printf("%s\n", singleDig[(number % 100) % 10]);
					}
				}
			}
			
			
				break;	
			
		case 4 :
			
			printf("%s THOUSAND ", singleDig[number / 1000]);
			
			if((number % 1000) / 10 != 0)
			{
				printf("%s HUNDRED ", singleDig[(number / 100) % 10]);
			}
			
			if(((number % 1000) % 100) / 10 != 0)
			{
				if( (number % 1000) % 100 < 20 && (number % 1000) % 100 != 10)
				{
					printf("%s\n", tenDig[(number % 100) % 10]);
					break;
				}
				else
				{
					printf("%s ", dubleDig[((number % 1000) % 100) / 10]);
					if(((number % 1000) % 100) % 10 != 0)
					{
						printf("%s\n", singleDig[((number % 1000) % 100) % 10]);
					}
				}
			}
			break;
			
		case 5 :
			
			if(number / 1000 < 20 && number / 1000)
			{
				printf("%s ", tenDig[(number / 1000) % 10]);
			}
			else
			{
				printf("%s ", dubleDig[number / 10000]);
				if((number / 1000) % 10 != 0)
				{
					printf("%s ", singleDig[(number / 1000) % 10]);
				}
			}
			
			printf("THOUSAND ");
			
			if((number % 1000) / 10 != 0)
			{
				printf("%s HUNDRED ", singleDig[(number / 100) % 10]);
			}
			
			if(((number % 1000) % 100) / 10 != 0)
			{
				if( (number % 1000) % 100 < 20 && (number % 1000) % 100 != 10)
				{
					printf("%s\n", tenDig[(number % 100) % 10]);
					break;
				}
				else
				{
					printf("%s ", dubleDig[((number % 1000) % 100) / 10]);
					if(((number % 1000) % 100) % 10 != 0)
					{
						printf("%s\n", singleDig[((number % 1000) % 100) % 10]);
					}
				}
			}
			
			break;	
			
		case 6 :
			printf("%s HUNDRED ", singleDig[number / 100000]);
			
			if(number / 10000 < 20 && number / 10000 != 10)
			{
				printf("%s ", tenDig[(number / 1000) % 10]);
			}
			else
			{
				printf("%s ", dubleDig[(number / 10000) % 10]);
				if((number / 1000) % 10 != 0)
				{
					printf("%s ", singleDig[(number / 10000) % 10]);
				}
			}
			
			printf("THOUSAND AND ");
			if((number % 1000) / 10 != 0)
			{
				printf("%s HUNDRED ", singleDig[(number / 100) % 10]);
			}
			
			if(((number % 1000) % 100) / 10 != 0)
			{
				if( (number % 1000) % 100 < 20 && (number % 1000) % 100 != 10)
				{
					printf("%s\n", tenDig[(number % 100) % 10]);
					break;
				}
				else
				{
					printf("%s ", dubleDig[((number % 1000) % 100) / 10]);
					if(((number % 1000) % 100) % 10 != 0)
					{
						printf("%s\n", singleDig[((number % 1000) % 100) % 10]);
					}
				}
			}
			break;
		
		case 7 : 
			printf("%s MILLION ", singleDig[number / 1000000]);
			
			printf("%s HUNDRED AND", singleDig[(number / 100000) % 10]);
			
			if(number / 10000 < 20 && number / 10000 != 10)
			{
				printf("%s ", tenDig[(number / 1000) % 10]);
			}
			else
			{
				printf("%s ", dubleDig[(number / 10000) % 10]);
				if((number / 1000) % 10 != 0)
				{
					printf("%s ", singleDig[(number / 10000) % 10]);
				}
			}
			
			printf("THOUSAND ");
			if((number % 1000) / 10 != 0)
			{
				printf("%s HUNDRED ", singleDig[(number / 100) % 10]);
			}
			
			if(((number % 1000) % 100) / 10 != 0)
			{
				if( (number % 1000) % 100 < 20 && (number % 1000) % 100 != 10)
				{
					printf("%s\n", tenDig[(number % 100) % 10]);
					break;
				}
				else
				{
					printf("%s ", dubleDig[((number % 1000) % 100) / 10]);
					if(((number % 1000) % 100) % 10 != 0)
					{
						printf("%s\n", singleDig[((number % 1000) % 100) % 10]);
					}
				}
			}
			break;
			
		case 8 :
			if(number / 1000000 < 20 && number / 1000000 != 10)
			{
				printf("%s ", tenDig[(number / 1000000) % 10]);
			}
			else
			{
				printf("%s ", dubleDig[(number / 10000000) % 10]);
				if((number / 1000000) % 10 != 0)
				{
					printf("%s ", singleDig[((number / 1000000) % 100) % 10]);
				}
			}
			
			printf("MILLION ");
			printf("%s HUNDRED AND ", singleDig[((number / 100000) % 100) % 10]);
			
			if(number / 10000 < 20 && number / 10000 != 10)
			{
				printf("%s ", tenDig[(number / 1000) % 10]);
			}
			else
			{
				printf("%s ", dubleDig[(number / 10000) % 10]);
				if((number / 1000) % 10 != 0)
				{
					printf("%s ", singleDig[(number / 10000) % 10]);
				}
			}
			
			printf("THOUSAND ");
			if((number % 1000) / 10 != 0)
			{
				printf("%s HUNDRED ", singleDig[(number / 100) % 10]);
			}
			
			if(((number % 1000) % 100) / 10 != 0)
			{
				if( (number % 1000) % 100 < 20 && (number % 1000) % 100 != 10)
				{
					printf("%s\n", tenDig[(number % 100) % 10]);
					break;
				}
				else
				{
					printf("%s ", dubleDig[((number % 1000) % 100) / 10]);
					if(((number % 1000) % 100) % 10 != 0)
					{
						printf("%s\n", singleDig[((number % 1000) % 100) % 10]);
					}
				}
			}
			break;
			
		case 9 :
			
			printf("%s HUNDRED ", singleDig[number / 100000000]);
			
			if(number / 1000000 < 20 && number / 1000000 != 10)
			{
				printf("%s ", tenDig[(number / 1000000) % 10]);
			}
			else
			{
				printf("%s ", dubleDig[(number / 10000000) % 10]);
				if((number / 1000000) % 10 != 0)
				{
					printf("%s ", singleDig[(number / 10000000) % 10]);
				}
			}
			
			printf("MILLION ");
			printf("%s HUNDRED AND ", singleDig[((number / 100000) % 100) % 10]);
			
			if(number / 10000 < 20 && number / 10000 != 10)
			{
				printf("%s ", tenDig[(number / 1000) % 10]);
			}
			else
			{
				printf("%s ", dubleDig[(number / 10000) % 10]);
				if((number / 1000) % 10 != 0)
				{
					printf("%s ", singleDig[(number / 10000) % 10]);
				}
			}
			
			printf("THOUSAND ");
			if((number % 1000) / 10 != 0)
			{
				printf("%s HUNDRED ", singleDig[(number / 100) % 10]);
			}
			
			if(((number % 1000) % 100) / 10 != 0)
			{
				if( (number % 1000) % 100 < 20 && (number % 1000) % 100 != 10)
				{
					printf("%s\n", tenDig[(number % 100) % 10]);
					break;
				}
				else
				{
					printf("%s ", dubleDig[((number % 1000) % 100) / 10]);
					if(((number % 1000) % 100) % 10 != 0)
					{
						printf("%s\n", singleDig[((number % 1000) % 100) % 10]);
					}
				}
			}
			break;												
	}
}
