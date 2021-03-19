#include <iostream>

using namespace std;

void print(int n, int k) {
    double a = 0;
    int i = 0;
    while (i < n ) {
        if ((i+1) % k == 0)
        {
            ++i;
            continue;
        }
        else {
            a = (pow(-1, i)) * (1 - (pow(2, i) / (pow(2, i) + 1)));
            cout << "n=" << i << " " << "f=" << a << "\n";
        }
        ++i;
    }

}