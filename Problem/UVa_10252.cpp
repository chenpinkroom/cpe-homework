#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b;
    
    while (getline(cin, a) && getline(cin, b)) {
        int countA[26] = {0};
        int countB[26] = {0};

        for (int i = 0; i < a.length(); i++) {
            if (a[i] >= 'a' && a[i] <= 'z') {
                countA[a[i] - 'a']++;
            }
        }

        for (int i = 0; i < b.length(); i++) {
            if (b[i] >= 'a' && b[i] <= 'z') {
                countB[b[i] - 'a']++;
            }
        }

        for (int i = 0; i < 26; i++) {
            int common_count = min(countA[i], countB[i]);
            
            for (int j = 0; j < common_count; j++) {
                char c = 'a' + i;
                cout << c;
            }
        }
        
        cout << "\n";
    }

    return 0;
}