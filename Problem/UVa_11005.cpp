#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test_cases;
    if (!(cin >> test_cases)) return 0;

    for (int t = 1; t <= test_cases; t++) {
        if (t > 1) {
            cout << "\n";
        }

        int cost[36];
        for (int i = 0; i < 36; i++) {
            cin >> cost[i];
        }

        cout << "Case " << t << ":\n";

        int num_queries;
        cin >> num_queries;

        while (num_queries--) {
            long long query_num;
            cin >> query_num;

            long long base_costs[37] = {0}; 
            long long min_cost = -1; 

            for (int b = 2; b <= 36; b++) {
                long long temp = query_num;
                long long current_base_cost = 0;

                if (temp == 0) {
                    current_base_cost = cost[0];
                } else {
                    while (temp > 0) {
                        int remainder = temp % b;
                        current_base_cost += cost[remainder];
                        temp /= b;
                    }
                }

                base_costs[b] = current_base_cost;

                if (min_cost == -1 || current_base_cost < min_cost) {
                    min_cost = current_base_cost;
                }
            }

            cout << "Cheapest base(s) for number " << query_num << ":";
            for (int b = 2; b <= 36; b++) {
                if (base_costs[b] == min_cost) {
                    cout << " " << b;
                }
            }
            cout << "\n";
        }
    }

    return 0;
}