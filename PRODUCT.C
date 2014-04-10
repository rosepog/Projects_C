#include<stdio.h>
#include<conio.h>

int main()
{

	int num1, num2, sum, product;

	clrscr();

	printf("Please enter the first number \n");
	scanf("%d", &num1);
	printf("Please enter the second number \n");
	scanf("%d", &num2);
	sum=num1+num2;
	product=num1*num2;
	printf("The sum of the two numbers is : %d \n" ,sum);
	printf("The product of the two numbers is: %d \n" ,product);

	getch();
	return 0;

}