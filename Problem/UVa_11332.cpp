#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    
    while (cin >> n && n != 0) {
        while (n >= 10) {
            long long sum = 0;
            while (n > 0) {
                sum += n % 10;
                n /= 10;
            }
            n = sum;
        }
        cout << n << "\n";
    }

    return 0;
}