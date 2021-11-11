//WAP to demonstrate arithmetic operation on two integer number//
#include<stdio.h>
#include<math.h>
int main()
{
	float num1,num2, add, sub, mul, div,modulo;

	printf("Enter first number: ");
	scanf("%f", &num1);
	printf("Enter second number: ");
	scanf("%f", &num2);

	add = num1+num2;    //Addition
	printf("Addition value is %.2f\n", add);
	
	sub = num1-num2;     //subtraction
	printf("Subtraction value is %.2f\n", sub);
	
	mul = num1*num2;     //multiplication
	printf("Multiplication value is %.2f\n", mul);
	
	div = num1/num2;     //division
	printf("Divison of the value is %.2f\n", div);
	
//	modulo = num1%num2;    // modulo  I can't use module in float means num1, num2 should be integer
	printf("Modulo of the value is %.2f\n", fmod(num1,num2));
	
	
	return 0;
}
