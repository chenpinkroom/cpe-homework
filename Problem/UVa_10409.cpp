#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

int main(){
	
	int n;
	string b;
	int temp = 0;
	while (cin >> n&&n != 0){
		int a[6] = { 1, 2, 3, 6, 5, 4 };
		while (n--){
			cin >> b;
			if (b == "north"){
				temp = a[1];
				a[1] = a[0];
				a[0] = a[4];
				a[4] = a[3];
				a[3] = temp;

			}
			if (b == "south"){
				temp = a[0];
				a[0] = a[1];
				a[1] = a[3];
				a[3] = a[4];
				a[4] = temp;

			}
			if (b == "east"){
				temp = a[0];
				a[0] = a[2];
				a[2] = a[3];
				a[3] = a[5];
				a[5] = temp;

			}
			if (b == "west"){
				temp = a[0];
				a[0] = a[5];
				a[5] = a[3];
				a[3] = a[2];
				a[2] = temp;

			}


		}
		cout << a[0] << endl;

	}

	return 0;
}