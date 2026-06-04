#include <iostream>
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;
    while (n--) {
        int m;
        cin >> m;

       
        int b1 = 0;
        int temp1 = m;
        while (temp1 > 0) {
            if (temp1 % 2 == 1) b1++;
            temp1 /= 2;
        }

        int b2 = 0;
        int temp2 = m;
        while (temp2 > 0) {
            int digit = temp2 % 10; 
            
            
            int d = digit;
            while (d > 0) {
                if (d % 2 == 1) b2++;
                d /= 2;
            }
            temp2 /= 10; 
        }

        cout << b1 << " " << b2 << endl;
    }
    return 0;
}