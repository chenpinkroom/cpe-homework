#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int finger[256][11] = {0};

    finger['c'][2] = finger['c'][3] = finger['c'][4] = finger['c'][7] = finger['c'][8] = finger['c'][9] = finger['c'][10] = 1;
    finger['d'][2] = finger['d'][3] = finger['d'][4] = finger['d'][7] = finger['d'][8] = finger['d'][9] = 1;
    finger['e'][2] = finger['e'][3] = finger['e'][4] = finger['e'][7] = finger['e'][8] = 1;
    finger['f'][2] = finger['f'][3] = finger['f'][4] = finger['f'][7] = 1;
    finger['g'][2] = finger['g'][3] = finger['g'][4] = 1;
    finger['a'][2] = finger['a'][3] = 1;
    finger['b'][2] = 1;
    finger['C'][3] = 1;
    finger['D'][1] = finger['D'][2] = finger['D'][3] = finger['D'][4] = finger['D'][7] = finger['D'][8] = finger['D'][9] = 1;
    finger['E'][1] = finger['E'][2] = finger['E'][3] = finger['E'][4] = finger['E'][7] = finger['E'][8] = 1;
    finger['F'][1] = finger['F'][2] = finger['F'][3] = finger['F'][4] = finger['F'][7] = 1;
    finger['G'][1] = finger['G'][2] = finger['G'][3] = finger['G'][4] = 1;
    finger['A'][1] = finger['A'][2] = finger['A'][3] = 1;
    finger['B'][1] = finger['B'][2] = 1;

    int t;
    if (cin >> t) {
        cin.ignore();
        while (t--) {
            string song;
            getline(cin, song);

            int press_count[11] = {0};
            int last_state[11] = {0};

            for (size_t i = 0; i < song.length(); ++i) {
                char current_note = song[i];

                for (int f = 1; f <= 10; ++f) {
                    if (finger[(unsigned char)current_note][f] == 1 && last_state[f] == 0) {
                        press_count[f]++;
                    }
                    last_state[f] = finger[(unsigned char)current_note][f];
                }
            }

            for (int f = 1; f <= 10; ++f) {
                cout << press_count[f] << (f == 10 ? "" : " ");
            }
            cout << "\n";
        }
    }

    return 0;
}