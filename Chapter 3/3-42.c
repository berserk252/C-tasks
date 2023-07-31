#include <stdio.h>

int main( void )
{
	float r, per, plos, d, p = 3.14159;
	
	
	printf("Enter radius of square (-1 to end) : ");
	scanf("%f", &r);
	
	while( r != 0)
	{
		d = r * r;
		per = ( p * 2) * r;
		plos = p * ( 2 * r );
		
		printf("Diametr of square is %f\n", d);
		printf("Perimetr of square is %f\n", per);
		printf("Ploshad of square is %f\n\n", plos);
		
		printf("Enter radius of square (-1 to end) : ");
		scanf("%f", &r);
	}
		
 	return 0; 
}
