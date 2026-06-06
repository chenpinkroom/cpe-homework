#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string n;
    while (cin >> n && n != "0") {
        int sum = 0;
        for (int i = 0; i < n.length(); i++) {
            sum += n[i] - '0';
        }

        if (sum % 9 != 0) {
            cout << n << " is not a multiple of 9.\n";
        } else {
            int degree = 1;
            while (sum > 9) {
                int temp_sum = 0;
                int temp = sum;
                while (temp > 0) {
                    temp_sum += temp % 10;
                    temp /= 10;
                }
                sum = temp_sum;
                degree++;
            }
            cout << n << " is a multiple of 9 and has 9-degree " << degree << ".\n";
        }
    }

    return 0;
}