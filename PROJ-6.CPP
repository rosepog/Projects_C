#include<stdio.h>
#include<conio.h>

void createQuiz1(char* a)
{
	printf("Entomology is the science that studies.");
	printf("\nA. Behavior of human beings");
	printf("\nB. Insects");
	printf("\nC. The origin and history of technical and scientific terms");
	printf("\nD. The formation of rocks\n\n");
	scanf("%s", a);

	return;
}
void createQuiz2(char* b)
{

	printf("Eritrea, which became the 182nd member of the UN in 1993, is in the continent of");
	printf("\nA. Asia");
	printf("\nB. Africa");
	printf("\nC. Europe");
	printf("\nD. Australia\n\n");
	scanf("%s", b);

	return;
}
void createQuiz3(char* c)
{

	printf("For which of the following disciplines is Nobel Prize awarded?");
	printf("\nA. Physics and Chemistry");
	printf("\nB. Physiology or Medicine");
	printf("\nC. Literature, Peace and Economics");
	printf("\nD. All of the above\n\n");
	scanf("%s", c);

	return;
}
void createQuiz4(char* d)
{

	printf("Hilter party which came into power in 1933 is known as.");
	printf("\nA. Labour Party");
	printf("\nB. Nazi Party");
	printf("\nC. Ku-Klux-Klan");
	printf("\nD. Democratic Party\n\n");
	scanf("%s", d);

	return;
}
void createQuiz5(char* e)
{

	printf("The great Victoria Desert is located in.");
	printf("\nA. Canada");
	printf("\nB. West Africa");
	printf("\nC. Australia");
	printf("\nD. North America\n\n");
	scanf("%s", e);

	return;

}
int main()
{


	clrscr();

	char a, b, c, d, e;
	int correct=0, incorrect=0;
	float percentage;

	createQuiz1(&a);

	if(a=='b' || a=='B')
	{
		correct=1;
		printf("\nCongratulations you got it right\n\n");

	}
	else
	{
		incorrect=1;
		printf("\nThe correct answer is B.\n\n");
	}

	createQuiz2(&b);

	if(b=='b' || b=='B')
	{
		correct++;
		printf("\nCongratulations you got it right\n\n");

	}
	else
	{
		incorrect++;
		printf("\nThe correct answer is B.\n\n");
	}

	createQuiz3(&c);

	if(c=='d' || c=='D')
	{
		correct++;
		printf("\nCongratulations you got it right\n\n");

	}
	else
	{
		incorrect++;
		printf("\nThe correct answer is D.\n\n");
	}

	createQuiz4(&d);

	if(d=='b' || d=='B')
	{
		correct++;
		printf("\nCongratulations you got it right\n\n");

	}
	else
	{
		incorrect++;
		printf("\nThe correct answer is B.\n\n");
	}

	createQuiz5(&e);

	if(e=='c' || e=='C')
	{
		correct++;
		printf("\nCongratulations you got it right\n\n");

	}
	else
	{
		incorrect++;
		printf("\nThe correct answer is C.\n\n");
	}


	printf("\nYour total number of correct answers is: %d", correct);
	printf("\nYour total number of incorrect answer is: %d", incorrect);
	percentage=((double)correct/5)*100;
	printf("\nThe percentage of correct answers is: %.f%%", percentage);

	getch();
	return 0;

}



