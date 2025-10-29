#include <stdio.h>
#include <math.h>
int main() {
    int n, temp, divisor;
    printf("Nhap mot so nguyen bat ky: ");
    scanf("%d", &n);
    if (n == 0) {
        printf("0\n");
        return 0;
    }
    if (n < 0) {
        printf("-");
        n = -n;
    }
    temp = n;
    divisor = 1;
    while (temp >= 10) {
        temp = temp / 10;
        divisor = divisor * 10;
    }
    while (divisor > 0) {
        int digit = n / divisor;
        printf("%d ", digit);
        n = n % divisor;
        divisor = divisor / 10;
    }
    printf("\n");
    return 0;
}

