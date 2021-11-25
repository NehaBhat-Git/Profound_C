//WAP to check whether a number is Armstrong number.
#include<stdio.h>
int armstrong(int n)
{
	int result,armstrong=0,temp=n;
	while(n>0)
	{
		int rem=n%10;
		armstrong=armstrong+(rem*rem*rem);
		n = n/10;
	}
	if(temp==armstrong)
		return 0;
	else
		return 1;	
}
int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);	
	if(armstrong(n)==0)
		printf("Yes! number is an  armstrong number");
	else
		printf("Not an armstrong number!!");
	return 0;	
}
