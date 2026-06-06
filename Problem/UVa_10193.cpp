#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (cin >> n) {
        for (int p = 1; p <= n; ++p) {
            string s1, s2;
            cin >> s1 >> s2;

            int n1 = 0;
            for (char c : s1) {
                n1 = n1 * 2 + (c - '0');
            }

            int n2 = 0;
            for (char c : s2) {
                n2 = n2 * 2 + (c - '0');
            }

            if (__gcd(n1, n2) > 1) {
                cout << "Pair #" << p << ": All you need is love!\n";
            } else {
                cout << "Pair #" << p << ": Love is not all you need!\n";
            }
        }
    }

    return 0;
}