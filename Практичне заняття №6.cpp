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

int combination(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}

int main() {
    int n = 3;
    double p = 0.5;

    cout << "Zadacha 6.28" << endl;
    cout << "Symetrychna moneta pidkydayetsya 3 razy." << endl;
    cout << "X - kilkist poyav gerba." << endl << endl;

    cout << "Formula: P(X=k) = C(n,k) * p^k * (1-p)^(n-k)" << endl;
    cout << "p = 0.5" << endl << endl;

    cout << "Zakon rozpodilu:" << endl;
    cout << "X\tP(X)" << endl;

    for (int k = 0; k <= n; k++) {
        double probability = combination(n, k) * pow(p, k) * pow(1 - p, n - k);

        cout << k << "\t" << probability << endl;
    }

    cout << endl;
    cout << "Vysnovok: naybilsha ymovirnist u podiy X=1 ta X=2." << endl;

    return 0;
}