#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    while (cin >> n) {
        
        bool is_n_prime = true;
        if (n <= 1) {
            is_n_prime = false;
        } else {
            for (long long i = 2; i * i <= n; i++) {
                if (n % i == 0) {
                    is_n_prime = false;
                    break;
                }
            }
        }

        if (!is_n_prime) {
            cout << n << " is not prime.\n";
            continue;
        }

        long long temp = n;
        long long m = 0;
        while (temp > 0) {
            m = m * 10 + (temp % 10);
            temp /= 10;
        }

        bool is_m_prime = true;
        if (m <= 1) {
            is_m_prime = false;
        } else {
            for (long long i = 2; i * i <= m; i++) {
                if (m % i == 0) {
                    is_m_prime = false;
                    break;
                }
            }
        }

        if (is_m_prime && n != m) {
            cout << n << " is emirp.\n";
        } else {
            cout << n << " is prime.\n";
        }
    }

    return 0;
}