#include <stdio.h>
#include <stdlib.h> 

int main() {
    int i, j; 

    while (scanf("%d %d", &i, &j) == 2) {

        int start, end;
        
        if (i > j) { 
            start = j;
            end = i;
        } 
		else {
            start = i;
            end = j;
        }

        int max = 0; 

        for (int k = start; k <= end; k++) {
            
            int count = 1; 
            
            unsigned long long n = k;

            while (n != 1) {
                if (n % 2 == 1) { 
                    n = 3 * n + 1;
                } 
				else { 
                    n = n / 2;
                }
                count++; 
            }

            if (count > max) {
                max = count;
            }
        }

        printf("%d %d %d\n", i, j, max);
    } 
    
    return 0;
}