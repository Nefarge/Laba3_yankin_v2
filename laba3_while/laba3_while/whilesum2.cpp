
#include <iostream>
#include "header.h"

using namespace std;


double summ2(double eps)
{

	double sum = 0;
	double a;
	int i = 0;
	a = (pow(-1, i)) * (1 - (pow(2, i) / (pow(2, i) + 1)));
	while (abs(a) > eps)
	{
		 
		a = (pow(-1, i)) * (1 - (pow(2, i) / (pow(2, i) + 1)));
		sum += a;
		cout << "n=" << i << "   " << "f=" << a << "\n";
		i++;
	}

	return sum;
}