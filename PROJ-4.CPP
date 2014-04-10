#include<stdio.h>
#include<conio.h>
#include<math.h>
#define laborRate 0.35
#define taxRate 0.085

void getData(int* length, int* width, int*discount, double* costPerFoot)
{

	printf("Length of rooom (feet)?: ");
	scanf("%d", length);
	printf("\nWidth of room (feet)?: ");
	scanf("%d", width);
	printf("\nCustomer discount (percent)?: ");
	scanf("%d", discount);
	printf("\nCost per square foot?: ");
	scanf("%lf", costPerFoot);
	return;

}

void printMeasurement(int length, int width)
{


      printf("\n\n\t\t\tMEASUREMENT\n");
      printf("\nLength\t\t\t\t\t\t%d", length);
      printf("\nWidth\t\t\t\t\t\t%d", width);
      printf("\nArea\t\t\t\t\t\t%d", length*width);
      return;

}

double computeInstPrice(int length, int width, double costPerFoot)
{

	int area;
	double carpetCost,  laborCost , instPrice;

	area =length*width;
	carpetCost=costPerFoot*area;
	laborCost=laborRate*area;
	instPrice=carpetCost+laborCost;
	instPrice=ceill(instPrice*100)/100;

	return instPrice;

}
double calcSubtotal(int length, int width, int discount, double costPerFoot)
{

	double  instPrice, discPrice, subtotal;

	instPrice=computeInstPrice(length, width, costPerFoot);
	discPrice= ((double)discount/100)*instPrice;
	subtotal=instPrice-discPrice;
	subtotal=ceill(subtotal*100)/100;
	return subtotal;

}
double calcTotal(int length, int width, int discount, double costPerFoot)
{

	double subtotal, taxPrice, total;

	subtotal=calcSubtotal(length, width, discount, costPerFoot);
	taxPrice=taxRate*subtotal;
	total=subtotal+taxPrice;
	total=floor(total*100)/100;

	return total;



}


void printCharges(int length, int width, int discount, double costPerFoot)
{

	double carpetCost,  laborCost , instPrice, discPrice, subtotal, total;

	instPrice=computeInstPrice(length, width, costPerFoot);
	discPrice=((double)discount/100)*instPrice;
	subtotal=calcSubtotal(length, width, discount, costPerFoot);
	total=calcTotal(length, width, discount, costPerFoot);




	printf("\n\n\t\t\t CHARGES");
	printf("\n\nDESCRIPTION\t\tCOST/SQ.FT.\t\tCHARGE");
	printf("\n------------\t\t-----------\t\t------");
	printf("\nCarpet\t\t\t%10.2lf\t%14.2lf", costPerFoot, costPerFoot*(length*width));
	printf("\nLabor\t\t\t%10.2lf\t%14.2lf", laborRate, laborRate*(length*width));
	printf("\n\n          \t\t           \t\t------");
	printf("\n\nINSTALLED PRICE\t\t\t\t%14.2lf", instPrice);
	printf("\nDiscount\t\t\t%d%%\t%14.2lf", discount, discPrice);
	printf("\n\n          \t\t           \t\t------");
	printf("\n\nSUBTOTAL\t\t\t\t%14.2lf", subtotal);
	printf("\n\nTAX\t\t\t\t\t%14.2lf", taxRate*subtotal);
	printf("\n\nTOTAL\t\t\t\t\t%14.2lf", total);



	return;


}

int main()
{


	clrscr();

	int length, width, discount, area;
	double costPerFoot;



	getData(&length, &width, &discount, &costPerFoot);
	printMeasurement(length, width);
	printCharges(length, width, discount, costPerFoot);






	getch();

	return 0;

}
