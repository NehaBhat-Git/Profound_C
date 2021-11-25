//WAP to check whether a number is palindrome. 
#include<stdio.h>
int palindrome(int n)
{
	int rem,temp=n,sum=0;
	while(n>0)
	{
		rem = n%10;
		sum= (sum*10)+rem;
		n=n/10;
	}
	if(temp==sum)
		return 0;
	else
		return 1;
}
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	if(palindrome(n)==0)
		printf("It is a palindrome number!!");
	else
		printf("It is not a palindrome number!!");
	return 0;
}
