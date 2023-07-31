#include<stdio.h>

int main( void )
{
	int  put, total;
	float benzin, galon, counter;
	
	printf("Vvedite rasxoduyemyj benzin (-1 to end)\n");
	scanf("%f", &benzin);
	
	while ( benzin != -1 )
	{
		printf("Vvedite proydenniy put\n");
		scanf( "%d", &put );
		
		galon = put / benzin;
		
		printf("Dlya etoy zapravki polucheno mil/galon: %f\n", galon);
		
		total += galon;
		counter++;
		
		printf("Vvedite rasxoduyemyj benzin (-1 to end)\n");
		scanf("%f", &benzin);	
			
	}
		
	printf("gallons/mills averagie is %f", total / counter);
	
	

	return 0;
}
