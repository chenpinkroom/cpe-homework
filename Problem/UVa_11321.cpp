#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    while (cin >> n >> m && (n != 0 || m != 0)) {
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }

        cout << n << " " << m << "\n";

        sort(nums.begin(), nums.end(), [m](int a, int b) {
            int modA = a % m;
            int modB = b % m;

            if (modA != modB) {
                return modA < modB;
            }

            bool isAOdd = (a % 2 != 0);
            bool isBOdd = (b % 2 != 0);

            if (isAOdd != isBOdd) {
                return isAOdd > isBOdd;
            }

            if (isAOdd && isBOdd) {
                return a > b;
            }

            return a < b;
        });

        for (int i = 0; i < n; i++) {
            cout << nums[i] << "\n";
        }
    }

    cout << "0 0\n";

    return 0;
}