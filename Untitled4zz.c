#include <stdio.h>

int main() {
    int N;
    int i;

    printf("Nhap N: ");
    scanf("%d", &N);

    if (N < 1 || N > 10) {
        printf("Bang cuu chuong khong hop le\n");
    } else {
        printf("Bang cuu chuong %d:\n", N);
        for (i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", N, i, N * i);
        }
    }

    return 0;
}

