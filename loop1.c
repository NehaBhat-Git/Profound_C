//WAP to check whether a number is prime or not
#include<stdio.h>
#include<math.h>
int main()
{
	int i, n;
	
	printf("Enter the number: ");
	scanf("%d", &n);
	
	for(i=2;i<sqrt(n);i++)
	{
		printf("%d\n",i);
		if(n%i==0)
		{
			printf("%d is not prime!!",n);
			break;
		}
	}
	if(i*i>n)
	{
		printf("%d",i);
		printf("%d is a prime number!!!",n);	
	}
	
	return 0;
}
