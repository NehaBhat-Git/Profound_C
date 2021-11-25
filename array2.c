//WAP to sort array in ascending order.

int main()
{

	int n;
	printf("Enter the number of array you want to printf:");
	scanf("%d",&n);
	int arr[n],i;
	
	//for input of array
	for(i=0;i<n;i++)
	{
		printf("Enter the number: "
		);
		scanf("%d",&arr[i]);
	}
	printf("\nUnorderd array is: ");
	for(i=0;i<n;i++)
	{
		printf("%d \n",arr[i]);
	}
	return 0;
	
}
