#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> fib;
    fib.push_back(1);
    fib.push_back(2);

    while (fib.back() < 100000000) {
        fib.push_back(fib[fib.size() - 1] + fib[fib.size() - 2]);
    }

    int N;
    cin >> N;

    while (N--) {
        int dec;
        cin >> dec;
        int original = dec;

        int start_idx = 0;
        for (int i = 0; i < fib.size(); i++) {
            if (fib[i] > dec) {
                start_idx = i - 1;
                break;
            }
        }

        cout << original << " = ";
        bool found_first = false;

        for (int i = start_idx; i >= 0; i--) {
            if (dec >= fib[i]) {
                cout << "1";
                dec -= fib[i];
                found_first = true;
            } else if (found_first) {
                cout << "0";
            }
        }

        cout << " (fib)" << endl;
    }

    return 0;
}