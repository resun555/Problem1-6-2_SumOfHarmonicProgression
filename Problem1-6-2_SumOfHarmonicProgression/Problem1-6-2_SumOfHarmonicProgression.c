// Problem1-6-2_SumOfHarmonicProgression.c : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	double sum = 0;
	double term;
	for (size_t i = 0; i < 100; i++)
	{
		term = 1. / (i + 1);
		sum += term;
	}
	printf("%lf", sum);
	return 0;
}

