#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    while (cin >> s) {
        int max_val = 0;
        long long sum_val = 0;

        for (int i = 0; i < s.length(); i++) {
            int val;
            if (s[i] >= '0' && s[i] <= '9') val = s[i] - '0';
            else if (s[i] >= 'A' && s[i] <= 'Z') val = s[i] - 'A' + 10;
            else val = s[i] - 'a' + 36;

            if (val > max_val) max_val = val;
            sum_val += val;
        }

        int start_n = max_val + 1;
        if (start_n < 2) start_n = 2;

        int ans = -1;
        for (int n = start_n; n <= 62; n++) {
            if (sum_val % (n - 1) == 0) {
                ans = n;
                break;
            }
        }

        if (ans != -1) cout << ans << endl;
        else cout << "such number is impossible!" << endl;
    }
    return 0;
}