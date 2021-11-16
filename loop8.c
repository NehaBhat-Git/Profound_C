/*   WAP to print 
		1
		1 1
		1 0 1
		1 0 0 1
		1 1 1 1 1
*/

#include<stdio.h>
int main()
{
	int row,col;
	
	for(row=1;row<=5;row++)
	{
		for(col=1;col<=row;col++)
		{
			if(row==1||col==row||col==1||row==5)
				printf("1");
			else
				printf("0");
		}
		printf("\n");
	}
	return 0;
}

