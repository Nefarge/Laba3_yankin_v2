#include <iostream>
#include "header.h"

using namespace std;


int findFirstNegativeElement(double eps)
{
	int output;
	int i = 0;
	double a;
	a = (pow(-1, i)) * (1 - (pow(2, i) / (pow(2, i) + 1)));
	while (abs(a) > 0 )
	{
		 
		a = (pow(-1, i)) * (1 - (pow(2, i) / (pow(2, i) + 1)));
		if (abs(a) <= eps && a < 0)
		{
			output = i;
			break;
		}
		i++;
	}
	return output;

}