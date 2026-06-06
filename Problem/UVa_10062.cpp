#include <bits/stdc++.h>

using namespace std;

struct Node {
    int ascii;
    int count;
};

int main() {
    string line;
    bool first = true;

    while (getline(cin, line)) {
        if (!first) cout << endl;
        first = false;

        int freq[128] = {0};
        for (int i = 0; i < line.length(); i++) {
            freq[(unsigned char)line[i]]++;
        }

        vector<Node> result;
        for (int i = 0; i < 128; i++) {
            if (freq[i] > 0) {
                Node temp;
                temp.ascii = i;
                temp.count = freq[i];
                result.push_back(temp);
            }
        }

        for (int i = 0; i < result.size(); i++) {
            for (int j = i + 1; j < result.size(); j++) {
                if (result[i].count > result[j].count || 
                   (result[i].count == result[j].count && result[i].ascii < result[j].ascii)) {
                    Node temp = result[i];
                    result[i] = result[j];
                    result[j] = temp;
                }
            }
        }

        for (int i = 0; i < result.size(); i++) {
            cout << result[i].ascii << " " << result[i].count << endl;
        }
    }

    return 0;
}