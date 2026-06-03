#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    while (N--) {
        int L;
        cin >> L;

        vector<int> train(L);
        for (int i = 0; i < L; ++i) {
            cin >> train[i];
        }

        int swaps = 0;

        for (int i = 0; i < L; ++i) {
            for (int j = 0; j < L - 1 - i; ++j) {
                if (train[j] > train[j + 1]) {
                    int temp = train[j];
                    train[j] = train[j + 1];
                    train[j + 1] = temp;
                    swaps++;
                }
            }
        }

        cout << "Optimal train swapping takes " << swaps << " swaps." << endl;
    }

    return 0;
}