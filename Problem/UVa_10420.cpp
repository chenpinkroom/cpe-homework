#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b) {
    return strcmp((char *)a, (char *)b);
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    char countries[2005][76];

    for (int i = 0; i < n; i++) {
        scanf("%s", countries[i]);

        char c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    qsort(countries, n, sizeof(countries[0]), compare);

    int count = 1;
    for (int i = 1; i < n; i++) {
        if (strcmp(countries[i], countries[i - 1]) == 0) {
            count++;
        } else {
            printf("%s %d\n", countries[i - 1], count);
            count = 1;
        }
    }

    if (n > 0) {
        printf("%s %d\n", countries[n - 1], count);
    }

    return 0;
}
