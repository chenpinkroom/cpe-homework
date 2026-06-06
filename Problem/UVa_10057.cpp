#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        vector<int> x(n);
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }

        sort(x.begin(), x.end());

        int median = x[n / 2];
        
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (x[i] == median) {
                count++;
            }
        }

        int possible_A_count;
        if (n % 2 != 0) {
            possible_A_count = 1;
        } else {
            possible_A_count = x[n / 2] - x[n / 2 - 1] + 1;
        }

        cout << median << " " << count << " " << possible_A_count << endl;
    }

    return 0;
}