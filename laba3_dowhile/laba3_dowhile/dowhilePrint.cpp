#include <iostream>

using namespace std;

void print(int n, int k)
{
    double a = 0;
    int i = 1;
    if (n == 0)
    {
        cout << "0\n";
    }
    else {
        do {
            if ((i+1) % k == 0)
            {
                i++;
                continue;
            }
            else {
                a = (pow(-1, i)) * (1 - (pow(2, i) / (pow(2, i) + 1)));
                cout << "n=" << i << " " << "f=" << a << "\n";
            }
            i++;
        } while (i < n + 1);
    }
}