#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    cout << fixed << setprecision(3);

    double x[] = {0, 2, 4, 6, 8};
    double y[] = {0.8, 2.5, 2.6, 4.8, 3.9};
    int n = 5;

    double sumX = 0, sumY = 0, sumX2 = 0, sumXY = 0;

    for (int i = 0; i < n; i++) {
        sumX += x[i];
        sumY += y[i];
        sumX2 += x[i] * x[i];
        sumXY += x[i] * y[i];
    }

    double a = (n * sumXY - sumX * sumY) / (n * sumX2 - sumX * sumX);
    double b = (sumY - a * sumX) / n;

    cout << "Zadacha 6.30" << endl;
    cout << "Rivnyannya regresii: y = " << a << "x + " << b << endl;

    cout << endl;

    double middle[] = {7, 17, 27, 37, 47, 57, 67};
    int freq[] = {7, 8, 15, 36, 15, 11, 8};
    int k = 7;

    int N = 0;
    double sum = 0;

    for (int i = 0; i < k; i++) {
        N += freq[i];
        sum += middle[i] * freq[i];
    }

    double mean = sum / N;

    double variance = 0;
    for (int i = 0; i < k; i++) {
        variance += freq[i] * pow(middle[i] - mean, 2);
    }
    variance /= N;

    double sigma = sqrt(variance);

    double chiObserved = 10.17;
    double chiCritical = 9.49;

    cout << "Zadacha 7.1" << endl;
    cout << "n = " << N << endl;
    cout << "Serednie x = " << mean << endl;
    cout << "Sigma = " << sigma << endl;
    cout << "Chi-square observed = " << chiObserved << endl;
    cout << "Chi-square critical = " << chiCritical << endl;

    if (chiObserved > chiCritical) {
        cout << "Vysnovok: hipoteza pro normalnyi rozpodil vidkhylyayetsya." << endl;
    } else {
        cout << "Vysnovok: hipoteza pro normalnyi rozpodil pryimaietsya." << endl;
    }

    return 0;
}