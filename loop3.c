/*   WAP to print the following pattern : 
 	   	*  
 	   ***
 	  *****
     *******
    *********
*/

#include<stdio.h>
int main()
{
	int row,col;
	
	for(row=1;row<=5;row++)
	{
		//loop for space
		for(col=1;col<=5-row;col++)
		{
			printf("  ");
		}
		//loop for star
		for(col=1;col<=(2*row-1);col++)
		{
			printf("* ");
		}
		printf("\n");	
	}	
	return 0;
	
}
