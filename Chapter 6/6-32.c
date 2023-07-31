#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define SIZE 10

void fillArray(int []);
void print(int []);
void selectionSort(int [], int);
int minimal(int [], int );
void swap(int [], int, int);

int main()
{
    int arr[SIZE];

    srand(time(NULL));
    fillArray(arr);

    printf("Not sorted array:\n");
    print(arr);
    selectionSort(arr, 0);
    printf("Sorted array:\n");
    print(arr);

    return 0;
}

void selectionSort(int arr[], int startPoint)
{
    int min;

    min = minimal(arr, startPoint);
    swap(arr, min, startPoint);

    if(startPoint < SIZE - 1)
    {
       selectionSort(arr, startPoint + 1);
    }
}

void swap(int arr[], int min, int startPoint)
{
    int hold;

    hold = arr[startPoint];
    arr[startPoint] = arr[min];
    arr[min] = hold;
}

int minimal(int arr[], int startPoint)
{
    int min, num;

    min = arr[startPoint];
    num = startPoint;

    for( ; startPoint < SIZE; startPoint++)
    {
        if(min > arr[startPoint])
        {
            min = arr[startPoint];
            num = startPoint;
        }
    }

    return num;
}

void fillArray(int arr[])
{
    for(int startPoint = 0; startPoint < SIZE; startPoint++)
    {
        arr[startPoint] = 1 + rand() % 100;
    }
}

void print(int arr[])
{
    for(int startPoint = 0; startPoint < SIZE; startPoint++)
    {
        printf("%d ", arr[startPoint]);
    }

    puts("");
}
