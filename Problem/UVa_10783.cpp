#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t; 

    for (int i = 1; i <= t; ++i) {
        int a, b;
        cin >> a >> b;

        int sum = 0;
        for (int j = a; j <= b; ++j) {

            if (j % 2 != 0) {
                sum += j;
            }
        }


        cout << "Case " << i << ": " << sum << endl;
    }

    return 0;
}