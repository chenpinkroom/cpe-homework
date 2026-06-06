#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long n, m;
    
    while (cin >> n >> m) {
        if (n < 2 || m < 2 || n < m) {
            cout << "Boring!\n";
            continue;
        }
        
        vector<long long> sequence;
        sequence.push_back(n);
        
        bool is_boring = false;
        
        while (n > 1) {
            if (n % m != 0) {
                is_boring = true;
                break;
            }
            
            n /= m;
            sequence.push_back(n);
        }
        
        if (is_boring || n != 1) {
            cout << "Boring!\n";
        } else {
            for (int i = 0; i < sequence.size(); i++) {
                cout << sequence[i] << (i == sequence.size() - 1 ? "" : " ");
            }
            cout << "\n";
        }
    }
    
    return 0;
}