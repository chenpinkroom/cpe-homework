#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> lines;
    string temp;
    int max_len = 0;

    while (getline(cin, temp)) {
        lines.push_back(temp);
        if (temp.length() > max_len) {
            max_len = temp.length();
        }
    }

    int rows = lines.size();

    for (int i = 0; i < max_len; ++i) {
        for (int j = rows - 1; j >= 0; --j) {
            if (i < lines[j].length()) {
                cout << lines[j][i];
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}