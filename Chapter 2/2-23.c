#include<stdio.h>

int main( void )
{
	int num1, num2, num3, num4, num5;
	
	
	printf("Entert five integers\n");
	scanf("%d%d%d%d%d", &num1, &num2, &num3, &num4, &num5);
	
	if ( num1 >= num2 )
	{
		if( num1 >= num3)
		{
			if (num1 >= num4)
			{
				if ( num1 >=num5)
				{
					printf("%d is largest\n", num1);
				}
				
			}
		}
		
	}
	
	if ( num2 >= num1 )
	{
		if( num2 >= num3)
		{
			if (num2 >= num4)
			{
				if ( num2 >=num5)
				{
					printf("%d is largest\n", num2);
				}
				
			}
		}
		
	}
	
	if ( num3 >= num1 )
	{
		if( num3 >= num2)
		{
			if (num3 >= num4)
			{
				if ( num3 >=num5)
				{
					printf("%d is largest\n", num3);
				}
				
			}
		}
		
	}


	if ( num4 >= num1 )
	{
		if( num4 >= num2)
		{
			if (num4 >= num3)
			{
				if ( num4 >=num5)
				{
					printf("%d is largest\n", num4);
				}
				
			}
		}
		
	}
	
	if ( num5 >= num1 )
	{
		if( num5 >= num2)
		{
			if (num5 >= num3)
			{
				if ( num5 >=num4)
				{
					printf("%d is largest\n", num5);
				}
				
			}
		}
		
	}
	
	if ( num1 <= num2 )
	{
		if( num1 <= num3)
		{
			if (num1 <= num4)
			{
				if ( num1 <= num5)
				{
					printf("%d is smallest\n", num1);
				}
				
			}
		}
		
	}
	
	
	if ( num2 <= num1 )
	{
		if( num2 <= num3)
		{
			if (num2 <= num4)
			{
				if ( num2 <= num5)
				{
					printf("%d is smallest\n", num2);
				}
				
			}
		}
		
	}
	
	
	if ( num3 <= num1 )
	{
		if( num3 <= num2)
		{
			if (num3 <= num4)
			{
				if ( num3 <= num5)
				{
					printf("%d is smallest\n", num3);
				}
				
			}
		}
		
	}
	
	if ( num4 <= num1 )
	{
		if( num4 <= num2)
		{
			if (num4 <= num3)
			{
				if ( num4 <= num5)
				{
					printf("%d is smallest\n", num4);
				}
				
			}
		}
		
	}
	
	if ( num5 <= num1 )
	{
		if( num5 <= num2)
		{
			if (num5 <= num3)
			{
				if ( num5 <= num4)
				{
					printf("%d is smallest\n", num5);
				}
				
			}
		}
		
	}

	return 0;
}
