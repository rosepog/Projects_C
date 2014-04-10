#include<stdio.h>
#include<conio.h>


void createPattern(int height, int width)
{
	int column, row;


	for(column=1; column<=width; column++)
	{
			printf("=");
	}

	printf("\n");
	for(row=1; row<=height; row++)
	{
		printf("*");

		for(column=1; column<width-1; column++)
			printf(" ");

		printf("*\n");
	}

	for(column=1; column<=width; column++)
		printf("=");


}
int main()
{

	clrscr();

	int height, width;

	printf("Please enter number of rows for your pattern: ");
	scanf("%d", &height);
	printf("\nPlease enter number of characters per line: ");
	scanf("%d", &width);
	printf("\n");
	createPattern(height, width);

	getch();

	return 0;

}