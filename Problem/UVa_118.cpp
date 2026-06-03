#include <iostream>
#include <string>

using namespace std;

int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
char dc[] = {'N', 'E', 'S', 'W'};
bool s[55][55];

int gd(char c) {
    if (c == 'N') return 0;
    if (c == 'E') return 1;
    if (c == 'S') return 2;
    if (c == 'W') return 3;
    return 0;
}

int main() {
    int W, H;
    if (!(cin >> W >> H)) return 0;

    int x, y;
    char c;
    while (cin >> x >> y >> c) {
        string t;
        cin >> t;
        int d = gd(c);
        bool l = false;

        for (char i : t) {
            if (i == 'R') {
                d = (d + 1) % 4;
            } else if (i == 'L') {
                d = (d + 3) % 4;
            } else if (i == 'F') {
                int nx = x + dx[d];
                int ny = y + dy[d];

                if (nx < 0 || nx > W || ny < 0 || ny > H) {
                    if (!s[x][y]) {
                        s[x][y] = true;
                        l = true;
                        break;
                    }
                } else {
                    x = nx;
                    y = ny;
                }
            }
        }

        cout << x << " " << y << " " << dc[d];
        if (l) cout << " LOST";
        cout << endl;
    }
    return 0;
}