
#include <iostream>
#include "header.h"

using namespace std;


double summ2(double eps)
{
	
	double sum = 0;
	double a; 
	int k = 0;
	a = (pow(-1, k)) * (1 - (pow(2, k) / (pow(2, k) + 1)));
	for (int i = 0; (abs(a) > eps); i++) {
		a = (pow(-1, i)) * (1 - (pow(2, i) / (pow(2, i) + 1)));
		sum += a;
		cout << "n=" << i<<"   " << "f=" << a <<"\n";
	}

	return sum;
}