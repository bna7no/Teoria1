#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <iomanip>

using namespace std;

int main() {
    vector<int> data = {
        4, 1, 4, 3, 4, 6, 4, 8, 1, 4,
        3, 4, 6, 4, 3, 4, 6, 4, 6, 4
    };

    int n = data.size();

    sort(data.begin(), data.end());

    cout << "Variatsiynyi ryad:" << endl;
    for (int x : data) {
        cout << x << " ";
    }

    cout << "\n\nStatystychnyi rozpodil:\n";

    map<int, int> freq;

    for (int x : data) {
        freq[x]++;
    }

    cout << "\nxi\tni\twi\n";

    for (auto item : freq) {
        double wi = (double)item.second / n;

        cout << item.first << "\t"
             << item.second << "\t"
             << fixed << setprecision(2)
             << wi << endl;
    }

    cout << "\nTochky polihona vidnosnykh chastot:\n";

    for (auto item : freq) {
        double wi = (double)item.second / n;

        cout << "("
             << item.first
             << "; "
             << fixed << setprecision(2)
             << wi
             << ")\n";
    }

    return 0;
}