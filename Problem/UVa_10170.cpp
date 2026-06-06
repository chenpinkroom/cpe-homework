#include <bits/stdc++.h>
using namespace std;

int main() {
    long long S, D;
    
    while (cin >> S >> D) {
        long long current_group_size = S;
        long long days_passed = 0;
        
        while (true) {
            days_passed += current_group_size;
            
            if (days_passed >= D) {
                cout << current_group_size << endl;
                break;
            }
            
            current_group_size++;
        }
    }
    
    return 0;
}