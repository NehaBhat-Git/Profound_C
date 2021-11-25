/* WAP to demonstrate all four categories of functions for volume of the cylinder
 (volume of cylinder: 3.14*r*r*h)
 		Function with parameters with return value  */

#include<stdio.h>
float myfun(float,float);   //declaration

int main()
{
	float r,h,result;
	printf("Enter the radius of the cylinder: ");
	scanf("%f",&r);
	printf("Enter the height of the cylinder: ");
	scanf("%f",&h);
	
	result=myfun(r,h);   //calling
	printf("Volume of the cylinder is %.2f",result);
	return 0;
}

float myfun(float r, float h)   //defination
{
	float cyl;
	 //calcualtion
	cyl=3.14*r*r*h;
	return cyl;	
}
