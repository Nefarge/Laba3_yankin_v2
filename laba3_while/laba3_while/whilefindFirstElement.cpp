#include <iostream>
#include "header.h"

using namespace std;

int findFirstElement(double eps)
{
	int output;
	int i = 0;
	double a;
	a = (pow(-1,0)) * (1 - (pow(2,0) / (pow(2, 0) + 1)));
	while (abs(a) > eps)
	{
		 
		double a = (pow(-1, i)) * (1 - (pow(2, i) / (pow(2, i) + 1)));
		if
			(abs(a) <= eps)
		{
			output = i;
			break;
		}
		i++;
	}

	return output;
}