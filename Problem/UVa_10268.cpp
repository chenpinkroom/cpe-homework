#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long x;
    while (cin >> x) {
        string line;
        cin.ignore();
        getline(cin, line);

        stringstream ss(line);
        long long coef;
        vector<long long> a;

        while (ss >> coef) {
            a.push_back(coef);
        }

        long long n = a.size() - 1;

        if (n == 0) {
            cout << 0 << "\n";
            continue;
        }

        long long ans = a[0] * n;

        for (int i = 1; i < n; i++) {
            ans = ans * x + a[i] * (n - i);
        }

        cout << ans << "\n";
    }

    return 0;
}