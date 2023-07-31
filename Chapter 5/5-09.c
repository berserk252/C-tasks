#include<stdio.h>

float calculateCharges (float x);

int main( void )
{
	int counter = 1;
	float hours, sum1 = 0, sum2, sum3 = 0;
	printf("Car\tHours\tCharges\n" );
	
	
	for(counter = 1; counter <= 3 ; counter++)
	{
		printf("%d\t", counter);
		scanf("%f", &hours);
		
		sum1 += hours;
		
		printf("%.2f\n", sum2 = calculateCharges ( hours) );
		sum3 += sum2;
	}
	
	printf("TOTAL\t%.1f\t%.2f", sum1, sum3);
		
	return 0;
}

float calculateCharges ( float x)
{
	
	if (x <= 3 )
	{
		x = 2;
		return x;	
	}
	
	if ( x > 3 )
	{
		x = x - 3;
		x = x / 2;
		x += 2; 
		if ( x > 10 )
		{
			x = 10;
		}
		return x;
	}
	

}
