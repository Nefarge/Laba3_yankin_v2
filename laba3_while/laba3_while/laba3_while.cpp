#include <cmath>
#include <iostream>
#include "header.h"
using namespace std;


int main()
{
    int n;
    double eps;
    int k, nomer;


    do {
        cout << "\n1. Zadanie 1 summ(int n)\n";
        cout << "2. Zadanie 2 summ2(double eps)\n";
        cout << "3. Zadanie 3 print(int n ,int k)\n";
        cout << "4. Zadanie 4 findFirstElement(double eps)\n";
        cout << "5. Zadanie 5 findFirstNegativeElement(double eps)\n";
        cout << "6. exit\n";

        cout << "vedite nomer=";
        cin >> nomer;


        switch (nomer)
        {
        case(1):
            system("cls");
            cout << "Vvedite n = ";
            cin >> n;
            cout << "Summa = " << summ(n) << "\n";


            break;
        case(2):
            system("cls");
            cout << "Vvedite n = ";
            cin >> n;
            cout << "\nvvedite tochnost=";
            cin >> eps;
            cout << "summa s tiocnostu =" << summ2(eps) << "\n";

            break;
        case(3):
            system("cls");
            cout << "Vvedite n = ";
            cin >> n;
            cout << summ(n);
            cout << "\nVvedite k =";
            cin >> k;
            print(n, k);

            break;
        case(4):
            system("cls");
            cout << "Vvedite n = ";
            cin >> n;
            cout << summ(n);
            cout << "\nvvedite tochnost=";
            cin >> eps;
            if (eps == 0)
            {
                cout << "takogo netu";
            }
            else
            {
                cout << "\nnomet pervogo chlena |a(i)|<=eps " << findFirstElement(eps) << "\n";

            }
            break;
        case(5):
            system("cls");
            cout << "Vvedite n = ";
            cin >> n;
            cout << summ(n);
            cout << "\nvvedite tochnost=";
            cin >> eps;
            if (eps == 0)
            {
                cout << "takogo netu";
            }
            else
            {
                cout << "\nnomer pervogo chlena |a(i)|<=eps & a(i)<0   n=" << findFirstNegativeElement(eps) << "\n";

            }
            break;
        case(6):

            system("cls");
            nomer = 7;
            break;
        }
    } while (nomer <= 6 && nomer > 0);
    system("cls");
}
