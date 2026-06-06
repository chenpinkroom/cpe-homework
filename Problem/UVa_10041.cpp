#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

int main() {
	int n;
	int m;
	int a[3000];
	int sum;
	int k = 0;

	scanf("%d", &n);
	while (n--) {
		scanf("%d", &m);
		
		sum = 0;

		for (int i = 0; i < m; i++) {
			scanf("%d", &a[i]);
		}
		//排序
		for (int x = 0; x < m - 1; x++) {
			for (int j = 0; j < m - 1 - x; j++) {
				if (a[j] > a[j + 1]) {
					int temp = a[j];
					a[j] = a[j + 1];
					a[j + 1] = temp;
				}
			}
		}
		//計算距離
		for (int r = 0; r < m ; r++) {
			k = a[m / 2] - a[r];
			sum = sum + abs(k);
		}
		printf("%d\n", sum);	
	}
	return 0;
}
	

