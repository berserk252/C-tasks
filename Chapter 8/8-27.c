#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

long stringToLong(const char *sPtr, char **endPtr, int base);
unsigned long uStringToLong(const char *sPtr, char **endPtr, int base);
double stringToDouble(const char *sPtr, char **endPtr);

int main( void )
{
	long num1, num2;
	char *sPtr = "   +54";
	char *endPtr1;
	char *endPtr2;

	for(int base = 0; base < 36; base++)
    {
        num1 = stringToLong(sPtr, &endPtr1, base);
        num2 = strtol(sPtr, &endPtr2, base);
        printf("%2d - %ld %ld\n",  base, num1, num2);
    }


	return 0;
}

long stringToLong(const char *sPtr, char **endPtr, int base)
{
	int maxChar = 0, sign = 0;
	long long int number = 0;

	if(base < 0 || base == 1 || base > 36)
    {
        return 0;
    }

	while(isspace(*sPtr))
	{
		sPtr++;
	}

	if( *sPtr == '+')
	{
		if(*sPtr == '-')
		{
			sign++;
		}

		sPtr++;
	}

	if((base == 0 || base == 16) && *sPtr == '0' && toupper(*(sPtr + 1)) == 'X')
	{
		base = 16;
		sPtr += 2;
	}

	if((base == 0 || base == 8) && *sPtr == '0' && *(sPtr + 1) == '0')
	{
		base = 8;
		sPtr += 2;
	}

	if(base == 0)
	{
		base = 10;
	}

	if(base > 10)
	{
		maxChar = (base - 11) + 65;
	}
	else
	{
		maxChar = 48 + (base - 1);
	}

	while(toupper(*sPtr) >= 48 && !ispunct(toupper(*sPtr)) && toupper(*sPtr) <= maxChar)
	{
			if(number * base >= LONG_MAX)
			{
				if(sign == 1)
				{
					return LONG_MIN;
				}
				else
				{
					return LONG_MAX;
				}
			}
			else
			{
				number = number * base;
			}

			if(*sPtr >= 65)
			{
				number = number + (toupper(*sPtr) - '7');
			}
			else
			{
				number = number + (toupper(*sPtr) - '0');
			}

		sPtr++;
	}

	*endPtr = sPtr;

	if(sign == 1)
	{
		number = 0 - number;
	}

	return number;

}

unsigned long uStringToLong(const char *sPtr, char **endPtr, int base)
{
	int maxChar;
	long int number = 0;

	if(base < 0 || base == 1 || base > 36)
    {
        return 0;
    }

	while(isspace(*sPtr))
	{
		sPtr++;
	}

	if(*sPtr == '+')
	{
		if(*sPtr == '-')
		{
			return 0;
		}
		sPtr++;
	}

	if((base == 0 || base == 16) && *sPtr == '0' && toupper(*(sPtr + 1)) == 'X')
	{
		base = 16;
		sPtr += 2;
	}

	if((base == 0 || base == 8) && *sPtr == '0' && *(sPtr + 1) == '0')
	{
		base = 8;
		sPtr += 2;
	}

	if(base == 0)
	{
		base = 10;
	}

	if(base > 10)
	{
		maxChar = (base - 11) + 65;
	}
	else
	{
		maxChar = 48 + (base - 1);
	}

	while(toupper(*sPtr) >= 48 && !ispunct(toupper(*sPtr)) && toupper(*sPtr) <= maxChar)
	{
			if(number * base >= LONG_MAX)
			{
				return ULONG_MAX;
			}
			else
			{
				number = number * base;
			}

			if(*sPtr >= 65)
			{
				number = number + (toupper(*sPtr) - '7');
			}
			else
			{
				number = number + (toupper(*sPtr) - '0');
			}

		sPtr++;
	}

	*endPtr = sPtr;

	return number;

}

double stringToDouble(const char *sPtr, char **endPtr)
{
	double num = 0;
	int sign = 0;
	char string[100];
	int counter = 0, flag = 0;
	int maxChar = 57;

	while(isspace(*sPtr))
	{
		sPtr++;
	}

	if( *sPtr == '+' || *sPtr == '-')
	{
		string[counter] = *sPtr;
		counter++;
		sPtr++;
		
		if(*sPtr == '-')
		{
			sign++;
		}
	}

	if(toupper(*sPtr)  == 'I' && toupper(*sPtr + 1) == 'N' && toupper(*sPtr + 2) == 'F')
	{
		num = INFINITY;
		
		if(sign == 1)
		{
			num = -INFINITY;
			return num;
		}

		return num;
	}

	if(toupper(*sPtr)  == 'N' && toupper(*sPtr + 1) == 'A' && toupper(*sPtr + 2) == 'N')
	{
		num = NAN;
		
		if(sign == 1)
		{
			num = -NAN;
			return num;
		}


		return num;
	}

	while(isdigit(*sPtr) || *sPtr == '.')
	{
	    if(*sPtr == '.' && flag == 0)
        {
            string[counter] = *sPtr;
            sPtr++;
            counter++;
            flag++;
        }

        if(isdigit(*sPtr))
        {
            string[counter] = *sPtr;
            sPtr++;
            counter++;
        }

        if(*sPtr == '.' && flag != 0)
        {
            sscanf(string, "%lf", &num);

            return num;
        }
	}


	if(toupper(*sPtr) == 'E')
	{
	    string[counter] = *sPtr;
        sPtr++;
        counter++;

		if(*sPtr == '+' || *sPtr == '-')
		{
			string[counter] = *sPtr;

			sPtr++;
			counter++;
		}

		while(isdigit(*sPtr))
		{
			string[counter] = *sPtr;

			sPtr++;
			counter++;
		}
	}

    *endPtr = sPtr;

    printf("%s\n", *endPtr);

	sscanf(string, "%lf", &num);

	return num;

}
