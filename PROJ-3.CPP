#include<stdio.h>
#include<conio.h>

void readData(int* num1, int* num2, int* num3)
{

	printf("Please enter three integers: ");
	scanf("%d %d %d", num1, num2, num3);
	return;
}

void printOrder(int num1, int num2, int num3)
{

	printf("%d %d %d", num1, num2, num3);
	return;
}

void printReverse(int num1, int num2, int num3)
{

	printf("%d %d %d", num3, num2, num1);
	return;

}

int main()
{
	clrscr();

	int num1, num2, num3;


	readData(&num1, &num2, &num3);
	printf("\nNumbers display in the order read: ");
	printOrder(num1, num2, num3);
	printf("\nNumbers display in reversed: ");
	printReverse(num1, num2, num3);


	getch();

	return 0;

}
