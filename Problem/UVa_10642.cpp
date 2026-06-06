#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        for (int case_num = 1; case_num <= t; ++case_num) {
            long long x1, y1, x2, y2;
            cin >> x1 >> y1 >> x2 >> y2;

            long long n1 = x1 + y1;
            long long steps_to_source = (n1 * (n1 + 1)) / 2 + x1;

            long long n2 = x2 + y2;
            long long steps_to_destination = (n2 * (n2 + 1)) / 2 + x2;

            long long ans = steps_to_destination - steps_to_source;

            cout << "Case " << case_num << ": " << ans << "\n";
        }
    }

    return 0;
}