//WAP to accept 2 numbers and print the larger of the 2 numbers
#include<stdio.h>

int main()
{
	int num1, num2;
	
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);
	
	if(num1>num2)
	{
		printf("%d is the  largest number",num1);
	}
	else if(num1<num2)
	{
		printf("%d is the  largest number",num2);
	}
	else{
		printf("Both number are equall");
	}
}
