#include<stdio.h>
#include<conio.h>

int main()
{

	clrscr();

	int option;
	float bill=0;




	do
	{

		printf("\nSelect your desired menu.");
		printf("\n\n(1) Cheeseburger 4.99");
		printf("\n\n(2) Pepsi 2.00");
		printf("\n\n(3) Chips 0.75");
		printf("\n\n(0) Quit program\n\n");
		scanf("%d", &option);

		switch (option)
		{
			case 1: bill=bill+4.99;
				break;
			case 2: bill=bill+2.00;
				break;
			case 3: bill=bill+0.75;
				break;
		}

	}while(option!=0);

	printf("\n\nThe customer's total bill is: %.2f", bill);



	getch();

	return 0;
}