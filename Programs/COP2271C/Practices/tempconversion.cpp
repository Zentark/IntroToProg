// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

int main()
{ 
	int temp_in_f;
	int temp_in_c;
	
	
	int ftoc; // place to store celsius conversion answer
	int ctof; // place to store fahrenheit conversion answer
	
	printf("enter temp in C");
	scanf_s("%d", &temp_in_c);
		printf("enter temp in F");
	scanf_s("%d", &temp_in_f);


		ctof = (9 * temp_in_c / 5) + 32;
		ftoc = 5 * (temp_in_f - 32) / 9;
		printf("%d\n Temperature in Fahreneit is %d in Celsius\n", temp_in_f, ftoc);

		printf("\n%d\n Temperature in Celsius is %d in Fahrenheit.\n\n", temp_in_c, ctof);

		return 0;




}

