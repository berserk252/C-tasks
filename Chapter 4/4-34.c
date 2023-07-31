#include<stdio.h>

int main( void )
{
	int num , num1 = 1, num2, pn = 0;
	
	for( int counter = 1; counter <= 256; counter++)
	{
		printf("%3d\t", counter);		
		num = counter;
		
		for( num1 = 1 ; num1 <= num ; num1 *= 2 )
			;
		
		num1 /= 2;
		pn = 0;
	
		for ( ; num1 > 0; num1 /= 2 )
		{	
			num2 = num % num1;			
			pn = pn * 10 + num / num1;		
			num = num2;
		}
		printf("%9d", pn);
	
		printf("\t");
		//-----------
		num = counter;
		
		for( num1 = 1 ; num1 <= num ; num1 *= 8 )
			;
		
		num1 /= 8;
		pn = 0;
	
		for ( ; num1 > 0; num1 /= 8 )
		{	
			num2 = num % num1 ;
			pn = pn * 10 + num / num1;
			num = num2;
		}
		printf("%3d", pn);
		
		printf("\t");
		//-------------
		num = counter;
		
		for( num1 = 1 ; num1 <= num ; num1 *= 16 )
			;		
		
		num1 /= 16;
		
		for ( ; num1 > 0; num1 /= 16 )
		{	
			num2 = num % num1 ;
			
			switch(num = num / num1)
			{
				case 10 :
					printf("A");
					break;
			
				case 11 :
					printf("B");
					break;
			
				case 12 :
					printf("C");
					break;
			
				case 13 :
					printf("D");
					break;
			
				case 14 :
					printf("E");
					break;
			
				case 15 :
					printf("F");
					break;
			
				default :
					printf("%d", num);
					break;		
			}
			
			num = num2;
		}
	
		printf("\n");	
	}
    return 0;
}
