#include<stdio.h>
int main()
{
	char ans;
	int num1, num2;
	scanf("%d""%d",&num1,num2);
	scanf("%c", &ans);
	switch(ans)
	{
		case '+':
			printf("%d""%d", num1,num2,(num1+num2));
			break;
		case '-':
			printf("%d",num1,num2, (num1-num2));
			break;
		default:
			printf("Incorrect Operator!!");
	}
	
	return 0;
}

