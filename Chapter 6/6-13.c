#include<stdio.h>


int main( void )
{
	char str[5];
	
	scanf("%s", str); //we haven't '/0' number in array

	int a[3];
	
	printf("%d %d %d\n", a[1], a[2], a[3]); // In book write ($d)
	
	float f[3] = {1.1, 10.01, 100.001}; // In book write 4 numbers
	
	double d[2][10];
	
	d[1][9] = 2.345; // In  book write (d[1, 9] = 2.345)
	
	return 0;
}
