//WAP to accept a number from user and find out sum of even digits from that given number
#include<stdio.h>
int main()
{
	int n,rem,sum=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	while(n>0)  //432>0
	{
		rem=n%10; //2
		if(rem%2==0)
			sum=sum+rem;
		n=n/10;
	}
	printf("Sum of all even digit is: %d",sum);
	return 0;
}
