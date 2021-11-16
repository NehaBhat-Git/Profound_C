// WAP to convert decimal to binary /binary to octal
#include<stdio.h>
int main()
{
	int n,rem,binary=0,i=1;
	printf("Enter the decimal number: ");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%2;   //5%2=1   
		n=n/2;     //5%2=2
		binary = binary+rem*i;
		i=i*10;
	}
	printf("The conversion of decimal into binary is:  %d", n,binary);	
	return 0;
}
