/*Accept three numbers from user and find out largest number among three and also find 
out whether that three numbers are equal or not.(else if ladder) */

#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("Enter first number: ");
	scanf("%d",&num1);
	printf("Enter second number: ");
	scanf("%d",&num2);
	printf("Enter third number: ");
	scanf("%d",&num3);
	
	if(num1>num2 && num1>num3)
	{
		printf("%d is greatest number!!",num1);
	}
	else if(num2>num1 && num2>num3)
	{
		printf("%d is greatest number!!",num2);
	}
	else if(num3>num1 && num3>num2)
	{
		printf("%d is greatest number!!",num3);
	}
	else
	{
		printf("All are Equal number!!");
	}
	return 0;
}

