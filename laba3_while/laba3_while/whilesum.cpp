#include <iostream>
#include "header.h"

using namespace std;
double summ(int n)
{
    int i=0;
    double sum = 0;
    double a = 0;
    while (i < n )
    {  
        a = (pow(-1, i)) * (1 - (pow(2, i) / (pow(2, i) + 1)));
        sum = sum + a;
        cout << "n=" << i << "    " << "f=" << a << "\n";
        i++;
    }
    return (sum);
}