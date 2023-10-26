// Lab42.cpp
// Скоропад Владислав
// Лабораторна робота № 4.2
// Табуляція функції, заданої формулою: функція однієї змінної.
// Варіант 11

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double x, xp, xk, dx, A, B, y;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |"
        << setw(7) << "y" << " |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    while (x <= xk) {
        A = 2 * abs(5 - x);
        if (x < -1){
            B = exp(fabs(2 + x));
        }
        else if (x < 1 && x > -1) {
            B = pow(sin(1.0 / (fabs(2 + x))), 2);
        }
        else {
            B = pow(cos(x), 2) / (1.0 + fabs(sin(x)));
        }

        y = A - B;

        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;
        x += dx;
    }
    cout << "---------------------------" << endl;
    return 0;
}
