//WAP to Calculate Simple interest
#include<stdio.h>
int main()
{
	float p, t,r,SI;
	printf("Please enter the principle value: ");
	scanf("%f", &p);
	
	printf("Please enter the time value: ");
	scanf("%f", &t);
	
	printf("Please enter the rate value: ");
	scanf("%f", &r);
		    
	SI = (p*t*r)/100;
	printf("The simple interest will be %.2f", SI);
	return 0;

}
