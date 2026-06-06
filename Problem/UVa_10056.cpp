#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int S;
    cin >> S;

    while (S--) {
        int N, I;
        double p;
        cin >> N >> p >> I;

        if (p == 0) {
            cout << fixed << setprecision(4) << 0.0000 << endl;
        } else {
            double result = p * pow(1 - p, I - 1) / (1 - pow(1 - p, N));
            cout << fixed << setprecision(4) << result << endl;
        }
    }

    return 0;
}