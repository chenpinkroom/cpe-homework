#include <bits/stdc++.h>
using namespace std;

int main() {
    double s, a;
    string unit;
    const double PI = acos(-1.0);

    while (cin >> s >> a >> unit) {
        double r = 6440.0 + s;

        if (unit == "min") {
            a /= 60.0;
        }

        if (a > 180.0) {
            a = 360.0 - a;
        }

        double rad = a * PI / 180.0;
        double arc_dist = r * rad;
        double chord_dist = 2.0 * r * sin(rad / 2.0);

        cout << fixed << setprecision(6) << arc_dist << " " << chord_dist << "\n";
    }

    return 0;
}