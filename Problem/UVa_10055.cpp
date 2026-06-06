#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

int main() {
	unsigned long long a, b;
	unsigned long long  diff = 0;
	while (scanf("%llu %llu", &a, &b) != EOF) {
		if (a > b) {
			diff = a - b;
		}
		else 
			diff = b - a;
		
		printf("%llu\n", diff);
	}
	return 0;
}