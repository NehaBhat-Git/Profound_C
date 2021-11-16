/*WAP to accept Cost Price from user and ask whether the user is a student or not.
 If the user is student and cost price is greater than 500, give discount of 10% ELSE discount will be 5%. 
 If user is not student and cost price is greater 500 then give discount of 8% ELSE discount will be 2%. 
(Take all inputs from USER) */

#include<stdio.h>
#include<string.h>
int main()
{
	float cp, discount;
	char ch;
	ch ='y','Y';
	
	printf("Press y or Y if you are a student, else Press n or N key: ");
	scanf("%c", &ch);
	printf("Enter Cost price: ");
	scanf("%f", &cp);
	if(ch=='y'|| ch=='Y')
	{
		if(cp>=500)
		{
			discount = (cp*10)/100;
			printf("Discount of 10 percent is: %.2f", discount);
			
		}
		else
		{
			discount = (cp*5)/100;
			printf("Discount of 5per is: %.2f", discount);
		}
	}
	else
	{
		if(cp>=500)
		{
			discount = (cp*8)/100;
			printf("Discount of 8per is: %.2f", discount);
		}
		else
		{
			discount = (cp*2)/100;
			printf("Discount of 2per is: %.2f", discount);
		}	
	}
	
	return 0;
}
