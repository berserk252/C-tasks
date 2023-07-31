#include <stdio.h>
#define SIZE 10

void printArray(int arr[], int size);

int main()
{
    int arr[SIZE] = {68, 72, 45, 12, 65, 98, 74, 75, 98, 10};

    for(int counter = 0; counter < SIZE; counter++)
    {
        printf("%d ", arr[counter]);
    }

    puts("");

    printArray(arr, SIZE - 1);

    return 0;
}

void printArray(int arr[], int size)
{
    if(size == -1)
    {
        return;
    }

    printArray(arr, size - 1);
    printf("%d ", arr[size]);
}
