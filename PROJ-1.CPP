#include<stdio.h>
#include<conio.h>

int parkingCharge(char vehicletype, int hour)
{

	int charge;

	if(vehicletype=='c'|| vehicletype=='C')
		charge=2*hour;
	else if(vehicletype=='b' || vehicletype=='B')
		charge=3*hour;
	else if(vehicletype=='t' || vehicletype=='T')
		charge=4*hour;


	return charge;
}

int main()
{

	clrscr();

	char vehicletype;
	int hour;

	printf("Please enter the letter of your corresponding vehicle type:\n");
	printf("\nC. Car\tB. Bus\tT. Truck\n\n");
	scanf("%s", &vehicletype);
	if(vehicletype=='c'|| vehicletype=='C' || vehicletype=='b' || vehicletype=='B' || vehicletype=='t' || vehicletype=='T')

	{
		printf("\nPlease enter no. of hours: ");
		scanf("%d", &hour);
		printf("\nYour total parking charge is: %d", parkingCharge(vehicletype, hour));
	}
	else
		printf("You have entered an incorrect letter");

	 getch();

	 return 0;
}