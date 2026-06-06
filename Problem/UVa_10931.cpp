#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (cin >> n && n != 0) {
        string binary = "";
        int parity_count = 0;
        int temp = n;

        while (temp > 0) {
            int remainder = temp % 2;
            
            if (remainder == 1) {
                parity_count++;
            }
            
            binary = to_string(remainder) + binary;
            temp /= 2;
        }

        cout << "The parity of " << binary << " is " << parity_count << " (mod 2).\n";
    }

    return 0;
}