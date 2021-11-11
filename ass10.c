 //Command line program to find area of triangle 
 #include<stdio.h>
 int main()
 {
	float area, height,base;
	printf("Enter the base of triangle: ");
	scanf("%f", &base);
	printf("Enter the height of triangle: ");
	scanf("%f", &height);

	area= (base*height)/2;
	printf("Area of traingle is %.2f", area);
	return 0;
 }
