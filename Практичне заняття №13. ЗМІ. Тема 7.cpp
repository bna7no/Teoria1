#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a[] = {3, 8, 13, 18, 23, 28};
    double b[] = {8, 13, 18, 23, 28, 33};

    int n[] = {3, 13, 25, 32, 22, 5};

    int N = 0;

    for (int i = 0; i < 6; i++)
        N += n[i];

    cout << "Interval\tni\twi" << endl;

    for (int i = 0; i < 6; i++) {
        double wi = (double)n[i] / N;

        cout << a[i] << "-" << b[i]
             << "\t\t" << n[i]
             << "\t" << fixed << setprecision(2)
             << wi << endl;
    }

    return 0;
}