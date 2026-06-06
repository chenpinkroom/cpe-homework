#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    while (cin >> s) {
        if (s == "0") {
            break;
        }

        int odd_sum = 0;
        int even_sum = 0;

        for (int i = 0; i < s.length(); i++) {
            int num = s[i] - '0'; 

            if (i % 2 == 0) {
                odd_sum += num;
            } else {
                even_sum += num;
            }
        }

        int diff = abs(odd_sum - even_sum);

        if (diff % 11 == 0) {
            cout << s << " is a multiple of 11.\n";
        } else {
            cout << s << " is not a multiple of 11.\n";
        }
    }

    return 0;
}