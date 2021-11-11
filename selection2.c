//WAP to check whether a person is eligible for voting or not.
#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age: ");
	scanf("%d",&age);
	//checking condition
	if(age>=18)
	{
		printf("You are eligible for voting!!");
	}
	else
	{
		printf("Sorry! You are not eligible for voting!!");
	}
	return 0;
}
