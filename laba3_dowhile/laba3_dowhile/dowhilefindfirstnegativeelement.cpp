
#include <iostream>
#include "header.h"

using namespace std;


int findFirstNegativeElement(double eps)
{
	int output;
	int i = 0;
	double a;
	a = (pow(-1, i)) * (1 - (pow(2, i) / (pow(2, i) + 1))); 
	do
	{

		a = (pow(-1, i)) * (1 - (pow(2, i) / (pow(2, i) + 1)));
		if (abs(a) <= eps && a < 0)
		{
			output = i;
			return output;
		}
		i++;
	} while (abs(a) > 0);
	 

	 
}