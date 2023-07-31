#include <stdio.h>

void stringReverse(char []);

int main()
{
   char arr[] = {"Armen"};

   printf("%s\n", arr);

   stringReverse(arr);

    return 0;
}

void stringReverse(char arr[])
{
    if(arr[0] == '\0')
    {
        return;
    }

    stringReverse(&arr[1]);
    printf("%c", arr[0]);
}
