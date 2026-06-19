#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    cout << fixed << setprecision(3);

    // Задача 4.1
    double sigma = 3;
    double x = 10.2;
    int n = 36;
    double t = 1.96;

    double delta = t * sigma / sqrt(n);

    cout << "Zadacha 4.1" << endl;
    cout << "Dovirchyi interval:" << endl;
    cout << "(" << x - delta << "; " << x + delta << ")" << endl;

    cout << endl;

    // Задача 5.1
    double s = 0.5;

    double sigma1 = s * (1 - 1 / sqrt(2.0 * n));
    double sigma2 = s * (1 + 1 / sqrt(2.0 * n));

    cout << "Zadacha 5.1" << endl;
    cout << "Dovirchyi interval sigma:" << endl;
    cout << "(" << sigma1 << "; " << sigma2 << ")" << endl;

    return 0;
}