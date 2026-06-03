#include<stdio.h>

int main() {
	char c;
	int check = 1;

	while ((c=getchar()) != EOF) {
		if (c == '"') {
			if (check == 1) {
				printf("``");
			}
			else {
				printf("''");
			}
			check = !check;

		}
		else {
			putchar(c);
		}
	}


	return 0;
}