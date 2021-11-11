//WAP to check whether a number is even and odd
#include<stdio.h>
int main()
{
	int num;
	
	printf("Please enter the number: ");
	scanf("%d", &num);
	
	if(num%2==0)
	{
		printf("The %d is even",num);
	}
	else{
		printf("The %d is odd",num);
	}
	return 0;
}
