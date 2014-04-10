#include<stdio.h>
#include<conio.h>

void getData (int* num1, int* num2)
{

	printf("Please enter two integers: ");
	scanf("%d %d", num1, num2);

	return ;
}
void selectOption(int* option)
{
	printf("\n\nSelect corresponding number the arithmetic method to use: ");
	printf("\n\n1. Add\t2. Subtract\t3. Multiply\t4. Division\n\n");
	scanf("%d", option);

	return;

}

int Add (int num1, int num2)
{

	return (num1+num2);

}
int Subtract (int num1, int num2)
{

	return (num1-num2);

}
int Multiply (int num1, int num2)
{

	return (num1*num2);

}
float Divide(int num1, int num2)
{

	return ((double)num1/num2);

}

int main()
{

	clrscr();

	int num1, num2, option;

	getData(&num1, &num2);
	selectOption(&option);

	if(option>0 && option<5)
	{
		switch(option)
		{
			case 1: printf("\n\nThe sum of the 2 integers is: %d", Add(num1, num2));
				break;
			case 2: printf("\n\nThe difference of the 2 integers is: %d", Subtract(num1, num2));
				break;
			case 3: printf("\n\nThe product of the 2 integers is: %d", Multiply(num1, num2));
				break;
			case 4: if(num2!=0)
					printf("\n\nThe quotient of the 2 integers is: %.2f", Divide(num1, num2));
				else
					printf("\n\nError: Cannot divide by zero.");
				break;

		 }
	}
	else
		printf("\n\nError: Invalid arithmetic code");

	getch();

	return 0;

}