//WAP to accept a number and print if it is postive or negative
#include<stdio.h>
int main()
{
	float num;
	printf("Please enter the number: ");
	scanf("%f", &num);
	
	if(num>0)
	{
		printf("%.0f is a postive number!!", num);
	}
	else if(num==0)
	{
		printf("%f is a Zero number!!", num);
	}
	else
	{
		printf("%f is a negative number!!", num);
	}
	return 0;
}
