#include<stdio.h>

int main( void )
{
	int year, loftyYear = 0, leapYears, years, days, dayOfWeek, day;
	
	printf("%s", "Enter year : ");
	scanf("%d", &year);
	
	if ( year % 4 == 0 && year % 100 != 0 )
		loftyYear = 1; // Lofty
		
	years = year - 1900;
    leapYears = ( years - 1 ) / 4;
    days = years * 365 + leapYears;
    dayOfWeek = days % 7; // First day in month
    
    printf("%d\n", dayOfWeek);
    
    for( int month = 1; month <= 12; month++ )
    {
    	switch (month)
    	{
    		case 1 :
    			printf("JANUARY\n\n");
    			break;
    		
			case 2 :
    			printf("FEBRUARY\n\n");
    			break;
			
			case 3 :
    			printf("MARCH\n\n");
    			break;		
    		
			case 4 :
    			printf("APRIL\n\n");
    			break;	
    		
			case 5 :
    			printf("MAY\n\n");
    			break;
			
			case 6 :
    			printf("JUNE\n\n");
    			break;
			
			case 7 :
    			printf("JULY\n\n");
    			break;
			
			case 8 :
    			printf("AUGUST\n\n");
    			break;
			
			case 9 :
    			printf("SEPTEMBER\n\n");
    			break;
			
			case 10 :
    			printf("OCTOBER\n\n");
    			break;
			
			case 11 :
    			printf("NOVEMBER\n\n");
    			break;
				
			case 12 :
    			printf("DECEMBER\n\n");
    			break;											
		}
		
		printf("Mo  Tu  We  Tr  Fr  Sa  Su\n");
		
		days = 28 + (month + month / 8) % 2 + 2 % month + 1 / month * 2; // How many days in month		
		
		if( month == 2 )
			days += loftyYear;
		
		for( int counter = dayOfWeek; counter != 0 ; counter--)
			printf("    ");
		
		for (day = 1; day <= days; day++)
		{
			printf("%2d  ", day);
			
			if ( ( day + dayOfWeek) % 7 == 0 )
			{
				printf("\n");
			}
		}
		
		dayOfWeek = (days + dayOfWeek) % 7;
		printf("\n\n");
	}    
	return 0;
}
