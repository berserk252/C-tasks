// Fig. 6.18: fig06_18.c
// Linear search of an array.
#include <stdio.h>
#define SIZE 100

// function prototype
size_t linearSearch(const int array[], int key, size_t n);

// function main begins program execution
int main(void)
{
   int a[SIZE]; // create array a

   // create some data
   for (size_t x = 0; x < SIZE; ++x) {
      a[x] = 2 * x;
   }

   printf("Enter integer search key: ");
   int searchKey; // value to locate in array a
   scanf("%d", &searchKey);

   // attempt to locate searchKey in array a
   size_t index = linearSearch(a, searchKey, 0);

   // display results
   if (index != -1) {
      printf("Found value at index %d\n", index);
   }
   else {
      puts("Value not found");
   }
}

size_t linearSearch(const int array[], int key, size_t n)
{
   // loop through array

      if (array[n] == key) {
         return n; // return location of key
      }
      else
      {
          if(n < SIZE)
          {
              linearSearch(array, key, n + 1);
          }
          else
          {
              return -1;
          }
      }
}

