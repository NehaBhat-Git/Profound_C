//WAP to accept five subject marks and find out total and average of the marks.
#include<stdio.h>   //header file
int main()			// main of the program
{
	int sub1,sub2,sub3,sub4,sub5;
	float total,avg;
	printf("Enter marks of first subject: ");
	scanf("%d", &sub1);
	printf("\nEnter marks of second subject: ");
	scanf("%d", &sub2);
	printf("\nEnter marks of third subject: ");
	scanf("%d", &sub3);
	printf("\nEnter marks of fourth subject: ");
	scanf("%d", &sub4);
	printf("\nEnter marks of fifth subject: ");
	scanf("%d", &sub5);
	
	total = sub1+sub2+sub3+sub4+sub5;
	printf("\n The total of the five subject is: %.2f",total);
	avg = (total)/5;
	printf("\nThe total average of all the subject is: %.2f",avg);
	return 0;
}
