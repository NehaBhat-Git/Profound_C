//Accept two numbers and perform swapping with third variable, and without third variable
#include<stdio.h>
int main()
{
	int a,b,x,y;
	printf("Enter the value: ");
	scanf("%d" "%d",&a,&b);
	// method 1
	a=a+b;   //a=25   // 	
	b=a-b;    //b= 25-15 =10
	a=a-b;   //25-10=15
	printf("Value after swap is %d %d\n", a,b); 
	
	//method 2 (XOR operator --> the result of XOR is 1 if two bits are different
	printf("Enter the value: ");
	scanf("%d" "%d",&x,&y);  //x=4, y=5
	x=x^y;     //100 ^ 101 = 001 (1)-->x	
	y=x^y;     // 001 ^ 101=  100 (4)-->y
	x=x^y;    // 001 ^ 100 = 101 (5)-->x
	printf("Value using XOR after swap is %d %d", x,y);  // 5,4

	return 0;
}
