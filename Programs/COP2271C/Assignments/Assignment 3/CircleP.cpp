// ConsoleApplication1.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
//Program to compute the radius of a circle.
#include <stdio.h>

int main()
{


	double circumference;
	double radius, a;
	printf("Enter a float value for circumference\n");
	scanf_s("%lf", &circumference);
	radius = circumference / (2 * 3.14);

	printf("The radius is: %.3f\n", radius);
	printf("area is:%f\n", 3.14*radius*radius);
	return 0;





}
