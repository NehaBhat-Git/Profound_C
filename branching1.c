/*WAP using following menus-
 Choice-1: Accept number and find out square and cube.
 Choice-2: Check whether the given year is LEAP or not. 
// If user enters wrong choice appropriate message should get displayed. */

#include<stdio.h>
int main()
{
	int ch,num,year;
	printf("Menus: ");
	printf("\nEnter 1 for finding the square and cube of a number");
	printf("\nEnter 2 for checking whether the year is leap or not");
	
	printf("\nEnter Your choice: ");
	scanf("%d", &ch);
	
	switch(ch)
	{
		case 1	:
			printf("Enter the number: ");
			scanf("%d",&num);
			printf("Square and cube of %d is: %d and %d ",num, num*num,num*num*num);
			break;
		
		case 2	:
			printf("Enter the year: ");
			scanf("%d", &year);	
			
			if(year%4==0 && year%100==0 && year%400==0)
				printf("It is a leap year!!");
			else if(year%4==0 && year%100!=0)
				printf("It is a leap year!!");
			else
				printf("It is not a leap year!!");
			break;
		
		default	:
			printf("Please Select the Correct Menu!!");
			break;
	}

	
	return 0;
}

