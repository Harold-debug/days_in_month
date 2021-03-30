#include<stdio.h>
#include<math.h>
int main()
{ int month,year;
	printf("Enter the month's number (1-12): ");
	scanf("%d",&month);
	if ( month==1||month==3||month==5||month==7||month==8||month==10||month==12)
	{printf("31 days");
	}
	else if(month==4||month==6||month==9||month==11)
	{printf("30 days");
	}
	else if(month==2)
	{printf("enter the year: ");scanf("%d",year);
	 if(year%4==0)
	 { printf("29 days"); 
	} else{printf("28 days");
	}
	}
	else {printf("Invalide input! please enter a correct number: ");
	}
	return 0;
	}
	
	
