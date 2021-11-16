/*  WAP to print 
		1 1 1 2
		3 2 2 2 
		3 3 3 4
*/
#include<stdio.h>
int main()
{
	int row,col;
	for(row =1;row<=3;)
	{
		for(col=1 ;col<=3;col++)
		{
			if(col==4)
			{
				row++;
				printf("%d",row);
			}
			else if(row%2==0&&col==1)
			{
				row++;
				printf("%d",row);
				row--;	
			}	
			else
			{
				printf("%d",row);
			}
		}
		printf("\n");
	}
	return 0;
}
