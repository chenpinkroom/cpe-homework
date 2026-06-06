#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solve() {
    int m, n, q;
    if (!(cin >> m >> n >> q)) return;

    vector<string> g(m);
    for (int i = 0; i < m; ++i) {
        cin >> g[i];
    }

    cout << m << " " << n << " " << q << endl;

    while (q--) {
        int r, c;
        cin >> r >> c;

        char t = g[r][c];
        int ans = 1;

        for (int d = 1; ; ++d) {
            int r1 = r - d, r2 = r + d;
            int c1 = c - d, c2 = c + d;

            if (r1 < 0 || r2 >= m || c1 < 0 || c2 >= n) break;

            bool ok = true;
            for (int i = r1; i <= r2; ++i) {
                for (int j = c1; j <= c2; ++j) {
                    if (g[i][j] != t) {
                        ok = false;
                        break;
                    }
                }
                if (!ok) break;
            }

            if (ok) ans = 2 * d + 1;
            else break;
        }
        cout << ans << endl;
    }
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}