#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, caseNum = 1;
    while (cin >> n) {
        cout << setw(4) << right << caseNum++ << ".";
        
        if (n == 0) {
            cout << " 0" << endl;
            continue;
        }

        long long val[] = {10000000, 100000, 1000, 100};
        string name[] = {"kuti", "lakh", "hajar", "shata"};

        long long kuti1 = n / 10000000;
        long long rem1 = n % 10000000;

        long long kuti2 = kuti1 / 10000000;
        long long rem2 = kuti1 % 10000000;

        if (kuti2 > 0) {
            for (int i = 1; i < 4; i++) {
                long long part = kuti2 / val[i];
                if (part > 0) {
                    cout << " " << part << " " << name[i];
                    kuti2 %= val[i];
                }
            }
            if (kuti2 > 0) cout << " " << kuti2;
            cout << " " << name[0];
        }

        if (rem2 > 0 || (kuti1 > 0 && rem2 == 0)) {
            long long temp = rem2;
            for (int i = 1; i < 4; i++) {
                long long part = temp / val[i];
                if (part > 0) {
                    cout << " " << part << " " << name[i];
                    temp %= val[i];
                }
            }
            if (temp > 0) cout << " " << temp;
            cout << " " << name[0];
        }

        long long temp = rem1;
        for (int i = 1; i < 4; i++) {
            long long part = temp / val[i];
            if (part > 0) {
                cout << " " << part << " " << name[i];
                temp %= val[i];
            }
        }
        if (temp > 0) cout << " " << temp;

        cout << endl;
    }
    return 0;
}