/*write a C program to input electricity unit charge and calculate the total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill. */

#include<stdio.h>
int main()
{
	int unit;
	float amt, add_charge, total_amt;
	printf("Enter the units: ");
	scanf("%d", &unit);
	
	if(unit <= 50)
	{
		amt = unit*0.50;
	}
	else if(unit <= 100)
	{
		amt = unit * 0.75;
	}
	else
	{
		amt = unit*1.50;
	}
	add_charge = amt*0.20;
	total_amt = amt+add_charge;
	
	printf("Total electricity bill %f", total_amt);
	return 0;
	
}
