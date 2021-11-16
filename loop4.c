/* WAP to print the following on output screen using jumping statements 
 
 1 5
 2 4
 4 2
 5 1 */
 
 #include<stdio.h>
 int main()
 {
 	int i,j;
 	
 	for(i=1, j=5;i<=5 ;i++,j--)
 	{
 		if(i == 2)
		 	continue;
		printf("%d \t %d \n",i,j);	
	}
 }

