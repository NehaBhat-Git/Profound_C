/*WAP which calculate speed for time and distance.
 Speed=(distance/time) */
 
 #include<stdio.h>
 int main()
 {
	float distance , time ,speed;
	printf("Enter the value of distance and time: ");
	scanf("%f""%f", &distance, &time);
	
	speed = distance/time;
	printf("Speed will be: %.2f", speed);	

	return 0;
 }
 

