//WAP to 
#include<stdio.h>
int main()
{
	float perm_rect, area_rect, perm_sq, area_sq;
	int l, b,a;
	printf("Enter length: ");
	scanf("%d", &l);
	printf("Enter breadth: ");
	scanf("%d", &b);
	printf("Enter side: ");
	scanf("%d", &a);
	
	// area of square
	area_sq= a*a;
	printf("The area of square %.2f\n", area_sq);
	
	//primeter of square
	perm_sq= 4*a;
	printf("The perimeter of square %.2f\n", perm_sq);
	
	// perimeter of rectangle
	perm_rect = 2*(l+b);
	printf("The perimeter of rectangle %.2f\n", perm_rect);
	
	// area of rectangle
	area_rect = l*b;
	printf("The area of rectangle %.2f\n", area_rect);
	
	return 0;
}

