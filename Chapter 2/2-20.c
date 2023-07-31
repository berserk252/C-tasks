#include<stdio.h>

int main( void )
{
	int R;
	
	printf("Enter the radius of the circle\n");
	scanf("%d", &R);
	
	printf("Circle diameter is %d\n", 2 * R);
	printf("The perimeter of the circle is %f\n", 2 * 3.14159 * R);
	printf("The area of the circle is %f\n", 3.14159 * (R * R) );
	
	
	return 0;
}
