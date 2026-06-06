#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T;
    if (!(cin >> T)) return 0;

    while (T--) {
        int N, P;
        cin >> N >> P;

        vector<int> days(N + 1, 0);

        for (int i = 0; i < P; ++i) {
            int h;
            cin >> h;
            
            for (int d = h; d <= N; d += h) {
                days[d] = 1;
            }
        }

        int count = 0;
        for (int d = 1; d <= N; ++d) {
            if (days[d] == 1) {
                if (d % 7 != 6 && d % 7 != 0) {
                    count++;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}