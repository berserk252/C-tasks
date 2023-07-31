#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

void arr_copy(int n, int m, double arr1[][m], double arr2[][m]);
void arr_print(int n, int m, double arr2[][m]);

int main( void )
{
	double arrayDoub[3][5] = {{45.2, 65.2, 55.2, 33.5, 22.5}, {45.2, 65.2, 55.2, 33.5, 22.5}, {45.2, 65.2, 55.2, 33.5, 22.5}};
	double arrayCopy[3][5];
	
	arr_copy(3, 5, arrayDoub, arrayCopy);
	arr_print(3, 5, arrayCopy);
	
	return 0;
}

void arr_copy(int n, int m, double arr1[][m], double arr2[][m])
{
	for(int i = 0; i != n; i++)
	{
		for(int y = 0; y != m; y++)
		{
			arr2[i][y] = arr1[i][y];
		}
	}
}

void arr_print(int n, int m, double arr2[][m])
{
	for(int i = 0; i != n; i++)
	{
		for(int y = 0; y != m; y++)
		{
			printf("%.1f ", arr2[i][y]);
		}
		puts("");
	}
}
