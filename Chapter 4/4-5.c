#include<stdio.h>

int main( void )
{
		int x;
		int value;
	// 1)
		for( x = 100; x >= 1; x++ )
			printf("%d\n", x);
			
	// 2)
		switch ( value % 2)
		{
				case "0":
				printf("Even integer\n");
				break;
			case "1":
				printf("Odd integer\n");
				break;
		}
	
	
	return 0;
}
	// 3)
		scanf("%d", &intVal);
		charval = getchar ();
		printf("Integer: %d\nCharacter: %c\n", intVal, charval);
	
	// 4)
		for ( x = 999; x >= 1; x += 2 )
			printf("%.f\n", x);
			
	// 5)
		for ( x = 999; x >= 1; x -= 2 )
			printf("%d\n", x);
	
	// 6)
		counter = 2;
		
		do {
			if ( counter % 2 == 0 )
				printf("5d\n", counter);
			counter += 2;
			
		}while ( counter <= 100);
	
	// 7)
		for ( x = 100; x <= 150; x++ )
			total += x;
