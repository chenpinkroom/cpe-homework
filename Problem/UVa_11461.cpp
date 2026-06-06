#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int a, b;
	while (cin >> a >> b && (a != 0 || b != 0)) {
		int count = 0;
		int root = ceil(sqrt(a));

		while (root * root <= b) {
			count++;
			root++;
		}
		cout << count << endl;
	}

	

	return 0;
}