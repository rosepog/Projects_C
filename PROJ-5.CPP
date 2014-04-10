#include<stdio.h>
#include<conio.h>

void createSurv1(int* survey1)
{

	printf("\n\nAre you in favor of same-sex marriage?");
	printf("\n(1) Yes");
	printf("\n(2) No");
	printf("\n(3) Undecided\n\n");
	scanf("%d", survey1);

	return;
}
void createSurv2(int* survey2)
{

	printf("\n\nDo you think Cyber Crime Law violates our freedom of speech and right to communication?");
	printf("\n(1) Yes");
	printf("\n(2) No");
	printf("\n(3) Undecided\n\n");
	scanf("%d", survey2);

	return;
}
void createSurv3(int* survey3)
{

	printf("\n\nAre you in favor of abolishing pork barrel?");
	printf("\n(1) Yes");
	printf("\n(2) No");
	printf("\n(3) Undecided\n\n");
	scanf("%d", survey3);

	return;
}
void createSurv4(int* survey4)
{

	printf("\n\nDo you think K-12 program can increase our quality of education?");
	printf("\n(1) Yes");
	printf("\n(2) No");
	printf("\n(3) Undecided\n\n");
	scanf("%d", survey4);

	return;
}
void getResponse(int* response)
{
	printf("\n\nDo you want to answer the survey questions again?");
	printf("\n(1) YES");
	printf("\n(2) NO\n\n");
	scanf("%d", response);

	return;
}


int main()
{

	clrscr();

	int survey1, survey2, survey3, survey4, response;
	int option1=0, option2=0, option3=0;



	do
	{
		createSurv1(&survey1);
		if(survey1== 1)
			option1=option1+1;

		else if(survey1== 2)
			option2=option2+1;

		else if(survey1== 3)
			option3=option3+1;

		createSurv2(&survey2);

		if(survey2== 1)
			option1=option1+1;

		else if(survey2== 2)
			option2=option2+1;

		else if(survey2== 3)
			option3=option3+1;

		createSurv3(&survey3);

		if(survey3== 1)
			option1=option1+1;

		else if(survey3== 2)
			option2=option2+1;

		else if(survey3== 3)
			option3=option3+1;

		createSurv4(&survey4);

		if(survey4== 1)
			option1=option1+1;

		else if(survey4== 2)
			option2=option2+1;

		else if(survey4== 3)
			option3=option3+1;

		getResponse(&response);

		}while(response!=2);


	printf("\n\nThere are %d user/s who have answered YES.", option1);
	printf("\n\nThere are %d user/s who have answered NO.", option2);
	printf("\n\nThere are %d user/s who are UNDECIDED.", option3);



	getch();

	return 0;

}