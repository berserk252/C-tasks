#include<stdio.h>

int main( void )
{
	int number;
	float sold, integer;
	
	printf("Enter part number ( 1 - 5) : ");
	scanf("%d", &number);
	printf("Enter quantity sold in one day : ");
	scanf("%f", &sold);
	
	switch ( number )
	{
		case 1 :
			integer = 2.98;
			break;
		
		case 2 :
			integer = 4.50;
			break;
		
		case 3 :
			integer = 9.98;
			break;
		
		case 4 :
			integer = 4.49;
			break;
		
		case 5 :
			integer = 6.87;
			break;	
		
		default :
			printf("Incorrect number grade entered\n");	
	}
	 
	 integer = (sold * 7 ) * integer; 
	
	printf("The total cost of the product for the week : %.2f\n", integer);
	
	return 0;
}
