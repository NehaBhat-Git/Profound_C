/*Write a program which will accept three integer numbers from user and find out greatest 
among them using conditional operator.  Conditional operator means (Ternary operator) */

#include<stdio.h>
int main()
{
	int a,b,c, result;
	printf("Enter three  values: ");
	scanf("%d" "%d" "%d",&a,&b,&c);
	// using ternary operator(condition operator)
	result=a>b? a:b>c? b:c>a? c:a;
	printf("Greatest value between %d , %d , %d is %d", a,b,c,result);
	return 0;
	
}
