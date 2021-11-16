/*. WAP a program to accept Percentage from user and check the GRADE
 A. Above 70% - Grade A 
 B. Between 60% to 70% - Grade B+. 
 C. Between 45% to 60% - Grade B. 
 D. Between 35% to 45% - Grade C.
 E. Less than 35% - Fail  */
 
 #include<stdio.h>
 int main()
 {
	float p;
	printf("Enter Your Percentage: ");
	scanf("%f", &p);
	if(p>70)
 	{
 		printf("Your Grade is A and your percentage is: %.2f",p);	
	}
	else if(p>=60 && p<=70)
	{
		printf("Your Grade is B+ and your percentage is: %.2f",p);
	}
	else if(p>=45 && p<60)
	{
		printf("Your Grade is B and your percentage is: %.2f",p);
	}
	else if(p>=35 && p<45)
	{
		printf("Your Grade is C and your percentage is: %.2f",p);
	}
	else
	{
		printf("Fail and percentage is: %.2f",p);
	}
	return 0;
 }
 
