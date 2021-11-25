//WAP to calculate average marks of a 10 students.

#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of array you want to printf:");
	scanf("%d",&n);
	int arr[n],i;
	float average,sum;
	
	sum=average=0;
	
	//for input of array
	for(i=0;i<n;i++)
	{
		printf("Enter the marks of %d student: ",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\nmarks of %d students is: ",i+1);
		printf("%d \n",arr[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	printf("\nSum of marks is: %.2f\n",sum);
	average= sum/10;
	
	printf("\nAverage of %d student is : %.2f",n,average);
	
	return 0;
}
