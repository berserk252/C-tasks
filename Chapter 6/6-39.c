#include <stdio.h>
#define SIZE 10

int recursiveMinimum(int arr[], int size);

int main()
{
    int arr[SIZE] = {1, 54, 45, 78, 87, 65, 2, 14, 36, 56};
    int minimal;

    minimal = recursiveMinimum(arr, SIZE - 1);

    printf("%d ", minimal);
    
    
    getchar();

    return 0;
}

int recursiveMinimum(int arr[], int size)
{
    int min = arr[0];

    if(size == 1)
    {
        return min;
    }

    min = recursiveMinimum(arr, size - 1);

    if(min > arr[size + 1])
    {
        min = arr[size + 1];
    }

    return min;
}

