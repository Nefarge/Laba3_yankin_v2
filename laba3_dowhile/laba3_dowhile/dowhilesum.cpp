#include <iostream>
#include "header.h"

using namespace std;
double summ(int n)
{
    int i = 0;
    double sum = 0;
    double a = 0;
    if (n == 0)
    {
        return 0;
    }
    else
    {
        do
        {
            a = (pow(-1, i)) * (1 - (pow(2, i) / (pow(2, i) + 1)));
            sum = sum + a;

            cout << "n=" << i << "    " << "f=" << a << "\n";
            i++;
        } while ((i < n));
        return (sum);
    }
}