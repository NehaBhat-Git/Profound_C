/* WAP to demonstrate all four categories of functions for volume of the cylinder
 (volume of cylinder: 3.14*r*r*h) 
      Function without parameter with return value.  */

#include<stdio.h>
float myfun();   //declaration

int main()
{
	float result;
	result=myfun();    //calling
	printf("Volume of the cylinder is %.2f",result);
	return 0;
}

float myfun()     //defination
{
	float r,h,cyl;
	printf("Enter the radius of the cylinder: ");
	scanf("%f",&r);
	printf("Enter the height of the cylinder: ");
	scanf("%f",&h);
	 //calcualtion
	cyl=3.14*r*r*h;
	return cyl;	
}
