#include<stdio.h>
#include "stdafx.h"
int main(void)
{
	int integer1, integer2, product; // first number to be entered by user

	printf("Enter first integer: \n"); //prompt
	scanf_s("%d", &integer1); //read and integer
	printf("print the integer1 %d\n", integer1);// read an integer
	printf("Enter second integer\n"); //prompt
	scanf_s("%d", &integer2); //read an integer
	printf("print the integer2 %d\n", integer2);
	product = integer1 * integer2;
	printf("product is: %d\n", product);
} //yay!