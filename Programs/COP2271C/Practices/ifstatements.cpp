// ConsoleApplication1.cpp : Defines the entry point for the console application.
//using if statements, relational
//operat

#include "stdafx.h"
#include <stdio.h>
//function main begins program execution

int main()
{
	printf("Enter two itegers, and I will tell you\n");
	printf("the relationships they satifsy:\n");
	int num1;// the first number to be read
	int	num2;// the second number to be read
		scanf_s("%d %d", &num1, &num2);
		if (num1 == num2){
		printf("%d is equal to %d\n", num1, num2);
	} //read two integers
	if (num1 != num2) {
		printf("%d is not equal to %d\n", num1, num2);
	}//end if
	if (num1 < num2) {
		printf("%d is less than %d\n", num1, num2);
	}//end if
	if (num1 > num2) {
		printf("%d is greater than %d\n", num1, num2);
	}//end if
	if (num1 <= num2) {
		printf("%d is less than or equal to %d\n", num1, num2);
	}//end if
	if (num1 >= num2) {
		printf("%d is greater than or equal to %d\n", num1, num2);
	}//end if
}//end function main

