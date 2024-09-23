//Rebecca Johns
//Febraury 17, 2024
//Week 4 math project

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int menu();
int Addition();
int Subtraction();
int Multiplication();
int Division();

main()
{
	int option, answer;
	float numProblems = 0;
	float correctAnswers = 0;
	float score;
	
	char message[] = "Rebecca's Math Program Practice Main Menu";
	puts(message);
	
	time_t current_time;
	char* c_time_string;
	srand(time(NULL));
	current_time = time(NULL);
	c_time_string = ctime(&current_time);
	printf("current time is %s", c_time_string);
	srand(time(NULL));
	
	printf("Enter 'A' for addition \n\t'S' for subtraction \n\t'M' for multiplication\n\t'D' for division and \n\t'E' to exit\n");
	scanf_s(" %c", &option, 1);
	option = toupper(option);
	
	while(option!='A' && option!='S' && option!='M' && option!='D' && option!='E')
	{
		printf("Please enter a valid letter: ");
		scanf_s(" %c", &option, 1);
		option=toupper(option);
	}
	
	while(option =='A' || option =='S' || option =='M' || option =='D')
	{	
		switch(option)
		{  case 'A': 
				answer = Addition();
				break;
			case 'S':
				answer = Subtraction();
				break;
			case 'M':
				answer = Multiplication();
				break;
			case 'D':
				answer = Division();
				break;

		}
		if(answer ==1)
		{
			correctAnswers +=1;
		}
		numProblems +=1;
		
		printf("Enter 'A' for addition \n\t'S' for subtraction \n\t'M' for multiplication\n\t'D' for division and \n\t'E' to exit\n");
		scanf_s(" %c", &option, 1);
		option = toupper(option);
		
	}
	printf("The total number of problems attempted was %.2f\n", numProblems);
	printf("The total number you got correct was %.2f\n", correctAnswers);
	 score = (correctAnswers/numProblems)* 100;
	 printf("Your score is: %%%.2f", score);
}


int Addition()
{
	int num1, num2, ans;
	num1 = rand() % 100 +1;
	num2 = rand() % 100 + 1;
	printf("%d + %d = ? ", num1, num2);
	scanf_s("%d", &ans);
	if(ans == num1 + num2)
	{
		printf("Correct\n");
		return ans = 1;
	}
	else
	{
		printf("Incorrect\n");
		return ans = 0;
	}
}

int Subtraction()
{
	int num1, num2, ans;
	num1 = rand() % 100 +1;
	num2 = rand() % 100 + 1;
	printf("%d - %d = ? ", num1, num2);
	scanf_s("%d", &ans);
	if(ans == num1 - num2)
	{
		printf("Correct\n");
		return ans = 1;
	}
	else
	{
		printf("Incorrect\n");
		return ans = 0;
	}
	
	
}

int Multiplication()
{
	int num1, num2, ans;
	num1 = rand() % 100 +1;
	num2 = rand() % 100 + 1;
	printf("%d * %d = ? ", num1, num2);
	scanf_s("%d", &ans);
	if(ans == num1 * num2)
	{
		printf("Correct\n");
		return ans = 1;
	}
	else
	{
		printf("Incorrect\n");
		return ans = 0;
	}
}

int Division()
{
	int num1, num2, num3, ans;
	num1 = rand() % 100 +1;
	num2 = rand() % 100 +1;
	
	if(num1<num2)
	{ num3 = num1;
	num1 = num2;
	num2 = num3;
	}
	
	printf("%d / %d = ? ", num1, num2);
	printf("Enter your answer to the closest whole number.");
	scanf_s("%d", &ans);
	
	if(ans == num1 / num2)
	{
		printf("Correct\n");
		return ans = 1;
	}
	else
	{
		printf("Incorrect\n");
		return ans = 0;
	}
	
}

