#include <bits/stdc++.h>
using namespace std;

char grid[105][105];
int ans[105][105];

int dx[8] = {-1, -1, -1,  0, 0,  1, 1, 1};
int dy[8] = {-1,  0,  1, -1, 1, -1, 0, 1};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    int field_count = 0;
    
    while (cin >> n >> m && (n != 0 || m != 0)) {
        field_count++;
        
        if (field_count > 1) {
            cout << "\n";
        }
        
        memset(ans, 0, sizeof(ans));
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '*') {
                    for (int d = 0; d < 8; d++) {
                        int nx = i + dx[d];
                        int ny = j + dy[d];
                        
                        if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
                            ans[nx][ny]++;
                        }
                    }
                }
            }
        }
        
        cout << "Field #" << field_count << ":\n";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '*') {
                    cout << '*';
                } else {
                    cout << ans[i][j];
                }
            }
            cout << "\n";
        }
    }
    
    return 0;
}