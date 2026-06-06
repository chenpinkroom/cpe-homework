#include<iostream>

using namespace std;

int main() {
	int t;
	int m, d;
	
	int month[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	string week[] = { "Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday" };
	
	cin >> t;

	while (t--) {
		cin >> m >> d;

		int totalday = 0;

		for (int i = 1; i < m; i++) {
			totalday = totalday + month[i];
		}
		totalday = totalday + d;

		int result = (totalday + 5) % 7;

		cout << week[result] << endl;

	}

	return 0;
}