// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>


int main()
{
	int score1, score2, score3;
	float average;
	//get three test scores
	printf("Enter 3 test scores and I will average them : ");
	scanf_s("%d %d %d", &score1, &score2, &score3);
	//calculate and display the average score
	average = (score1 + score2 + score3) / 3.0;
	printf("Your average is %f\n", average);
	//if the average equals 100, congratulate the user!
	if (average == 100)

	{
		printf("Congratulations! ");
		printf("That's a perfect score!\n");
	}
	else
	{
		printf("\n\n\n You suck \n...\n...\n...");
	}
	return 0;
}

