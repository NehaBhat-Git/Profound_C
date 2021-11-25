/*  . WAP to demonstrate all four categories of functions for volume of the cylinder
 (volume of cylinder: 3.14*r*r*h)
 a) Function without parameters without return value */
 
 #include<stdio.h>
 void myfun();    //declaration
 
 void main()
 {	
 	myfun();      //calling
 }
 
void myfun()      //defintion
{
	float r,h,cyl;
	printf("Enter the radius of the cylinder: ");
	scanf("%f",&r);
	printf("Enter the height of the cylinder: ");
	scanf("%f",&h);
	 //calcualtion
	cyl=3.14*r*r*h;
	printf("Volume of the cylinder is %.2f",cyl);
	
}
