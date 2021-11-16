#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    int ch;
    printf(" 1.Addition\n 2.Subtraction\n");
    printf("Enter the values of a & b: ");
    scanf("%d %d",&a,&b);
    printf("Enter your Choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1	:
        printf("\nAddition of %d and %d is : %d",a,b,a+b);
        break;
    case 2	:
        printf("\nSubtraction of %d and %d is : %d",a,b,a-b);
        break;
    default	:
        printf("\nEnter Your Correct Choice.");
        break;
    }
    return 0;
}

