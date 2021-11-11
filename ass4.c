//WAP to convert Fahrenheit temp in degree Celsius.
#include<stdio.h>
int main()
{
	float F,c;
	printf("Enter the fahrenheit unit: ");
	scanf("%f",&F);
	
	//Convert fahrenheit to celsius
	c = (F-32)*5/9;
	printf("Celsius unit is %.2f",c);
	return 0;	
}
