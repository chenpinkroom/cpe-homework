#include <bits/stdc++.h>
using namespace std;

int main() {
    double x1, y1, x2, y2, x3, y3, x4, y4;
    
    while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4) {
        double target_x, target_y;
        
        if (x1 == x3 && y1 == y3) {
            target_x = x2 + x4 - x1;
            target_y = y2 + y4 - y1;
        } 
        else if (x1 == x4 && y1 == y4) {
            target_x = x2 + x3 - x1;
            target_y = y2 + y3 - y1;
        } 
        else if (x2 == x3 && y2 == y3) {
            target_x = x1 + x4 - x2;
            target_y = y1 + y4 - y2;
        } 
        else {
            target_x = x1 + x3 - x2;
            target_y = y1 + y3 - y2;
        }
        
        cout << fixed << setprecision(3) << target_x << " " << target_y << "\n";
    }
    
    return 0;
}