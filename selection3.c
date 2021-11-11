//WAP to check whether Number is positive or negative or ZERO.
#include<stdio.h>
int main()
{
	int num;
	printf("Enter the value: ");
	scanf("%d", &num);
	if(num>0)
	{
		printf("%d is +ve number!!", num);
	}
	else if(num<0)
	{
		printf("%d is -ve number!!", num);
	}
	else
	{
		printf("%d is zero!!", num);
	}
	
	
	return 0;
}

