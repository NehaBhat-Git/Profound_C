// WAP to accept a number from the user and say whether it is a prime number or not
#include<stdio.h>
#include<math.h>
int main()
{
	int num,i;
	printf("Enter the number: ");
	scanf("%d", &num);
	
	for(i =2; i<sqrt(num);i++)
	{
		printf("%d\n",i);
		if((num%i)==0)
		{
			printf("%d is not a prime number!!", num);
			break;
		}
	}
	if(i*i>num)
	{
		//printf("%d\n",i);
		printf("%d is Prime number!!",num);
	}
	return 0;
	
}


