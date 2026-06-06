#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    int caseNum = 1;

    while (cin >> N) {
        int b[105];
        bool isB2 = true;

        for (int i = 0; i < N; i++) {
            cin >> b[i];
            
            if (b[i] < 1) {
                isB2 = false;
            }
            if (i > 0 && b[i] <= b[i - 1]) {
                isB2 = false;
            }
        }

        bool sumExist[20005];
        memset(sumExist, false, sizeof(sumExist));

        if (isB2) {
            for (int i = 0; i < N; i++) {
                for (int j = i; j < N; j++) {
                    int currentSum = b[i] + b[j];

                    if (sumExist[currentSum]) {
                        isB2 = false;
                        break;
                    }
                    
                    sumExist[currentSum] = true;
                }
                if (!isB2) break;
            }
        }

        if (isB2) {
            cout << "Case #" << caseNum << ": It is a B2-Sequence.\n";
        } else {
            cout << "Case #" << caseNum << ": It is not a B2-Sequence.\n";
        }
        
        cout << "\n";
        caseNum++;
    }

    return 0;
}