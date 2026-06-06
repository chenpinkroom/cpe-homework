#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        long long s, d;
        cin >> s >> d;

        if (s < d || (s + d) % 2 != 0) {
            cout << "impossible\n";
        } else {
            long long a = (s + d) / 2;
            long long b = (s - d) / 2;
            cout << a << " " << b << "\n";
        }
    }

    return 0;
}