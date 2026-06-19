#include <iostream>
#include <cmath>
using namespace std;

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int C(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}

int main() {
    cout << "Zavdannya 5.1" << endl;

    int n1 = 5;
    double p1 = 0.3;
    double q1 = 0.7;

    double a = C(n1, 1) * pow(p1, 1) * pow(q1, 4);
    double b = 1 - pow(q1, 5);

    cout << "a) Tilky odyn nestandartnyi: " << a << endl;
    cout << "b) Prynaimni odyn nestandartnyi: " << b << endl;

    cout << endl;
    cout << "Zavdannya 6.8" << endl;

    int n2 = 3;
    double p2 = 0.25;
    double q2 = 0.75;

    cout << "X\tP(X)" << endl;

    for (int k = 0; k <= n2; k++) {
        double probability = C(n2, k) * pow(p2, k) * pow(q2, n2 - k);
        cout << k << "\t" << probability << endl;
    }

    double M = n2 * p2;
    double D = n2 * p2 * q2;
    double sigma = sqrt(D);

    cout << endl;
    cout << "M(X) = " << M << endl;
    cout << "D(X) = " << D << endl;
    cout << "Sigma = " << sigma << endl;

    return 0;
}