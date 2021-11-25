/*  . WAP to demonstrate all four categories of functions for volume of the cylinder
 (volume of cylinder: 3.14*r*r*h)
 
  Function with parameter without return value. */
  
  #include<stdio.h>
  void myfun(float,float);   //declaration
  
  int main()
  {
  	float r,h;
  	myfun(r,h);	         //calling
  }
  
  void myfun(float r, float h)  //definition
  {
  	float cyl;
	printf("Enter the radius of the cylinder: ");
	scanf("%f",&r);
	printf("Enter the height of the cylinder: ");
	scanf("%f",&h);
	 //calcualtion
	cyl=3.14*r*r*h;
	printf("Volume of the cylinder is %.2f",cyl);
  	
  }

