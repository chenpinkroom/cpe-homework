#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test_cases;
    if (cin >> test_cases) {
        string line;
        cin.ignore();
        getline(cin, line);

        for (int t = 0; t < test_cases; t++) {
            map<string, int> tree_count;
            int total_trees = 0;

            while (getline(cin, line) && !line.empty()) {
                tree_count[line]++;
                total_trees++;
            }

            cout << fixed << setprecision(4);

            for (auto const& pair : tree_count) {
                double percentage = (double)pair.second / total_trees * 100.0;
                cout << pair.first << " " << percentage << "\n";
            }

            if (t < test_cases - 1) {
                cout << "\n";
            }
        }
    }
    return 0;
}