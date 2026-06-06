#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    if (cin >> T) {
        for (int t = 1; t <= T; ++t) {
            char discard_N, discard_equal;
            long long N;

            cin >> discard_N >> discard_equal >> N;

            vector<vector<long long>> matrix(N, vector<long long>(N));
            bool is_symmetric = true;

            for (int i = 0; i < N; ++i) {
                for (int j = 0; j < N; ++j) {
                    cin >> matrix[i][j];
                    if (matrix[i][j] < 0) {
                        is_symmetric = false;
                    }
                }
            }

            if (is_symmetric) {
                for (int i = 0; i < N; ++i) {
                    for (int j = 0; j < N; ++j) {
                        if (matrix[i][j] != matrix[N - 1 - i][N - 1 - j]) {
                            is_symmetric = false;
                            break;
                        }
                    }
                    if (!is_symmetric) break;
                }
            }

            if (is_symmetric) {
                cout << "Test #" << t << ": Symmetric.\n";
            } else {
                cout << "Test #" << t << ": Non-symmetric.\n";
            }
        }
    }

    return 0;
}