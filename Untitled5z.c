#include <stdio.h>

int main() {
    int n, m;

    for (n = 1; n <= 9; n++) {          
        printf("\nBang cuu chuong %d:\n", n);
        for (m = 1; m <= 10; m++) { 
            printf("%d x %d = %d\n", n, m, n * m);
        }
    }

    return 0;
}

