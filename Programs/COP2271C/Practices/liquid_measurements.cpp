// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

int main()
{
	int ounces = 9946;
	int cups;
	int quarts;
	int gallons;
	cups = ounces / 8;
	printf(" %d ounces is: %d cups and %d ounces \n", ounces, cups, ounces % 8);

	quarts = cups / 4;
	printf("\n %d ounces is: %d quarts and %d ounces\n", ounces, quarts, cups % 4 * 8 + ounces % 8);

	gallons = ounces / 128;
	printf("\n %d ounces is: %d gallons and %d ounces\n", ounces, gallons, ounces % 128);
	return 0;

}

