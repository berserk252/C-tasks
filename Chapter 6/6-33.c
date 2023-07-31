#include <stdio.h>
#include <stdlib.h>

int testPalindrome(char [], int, int);
int sizeOfArray(char []);

int main()
{
    char arr[] = {"anna"};
    int num = 0;
    int size;
	
	printf("Sentence or word for verification '%s'\n", arr);
    size = sizeOfArray(arr);
    size--;
    num = testPalindrome(arr, 0, size);


    if(num == 1)
    {
        printf("This is palindrome.\n");
    }
    else
    {
        printf("This isn't palindrome.\n");
    }

    return 0;
}

int testPalindrome(char arr[], int low, int high)
{
    if(arr[low] == ' ' || arr[low] == ',' || arr[low] == '.' || arr[low] == ';' || arr[low] == ':')
    {
    	low++;
	}
	
	if(arr[high] == ' ' || arr[high] == ',' || arr[high] == '.' || arr[high] == ';' || arr[high] == ':')
    {
    	high--;
	}
    
    if(low == high  || low + 1 == high)
    {
        return 1;
    }
    else
    {
    	if(arr[low] == arr[high])
    	{
          testPalindrome(arr, low + 1, high - 1);
		}
  		else
  		{
  	       return 0;
		}
    }
}

int sizeOfArray(char arr[])
{
    int counter = 0;

    while(arr[counter] != '\0')
    {
        counter++;
    }

    return counter;
}
