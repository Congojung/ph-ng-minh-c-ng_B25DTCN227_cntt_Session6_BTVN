#include <stdio.h>

int main() {
    int a, b, x, y, temp, ucln, bcnn;
    printf("Nhap so nguyen duong thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so nguyen duong thu hai: ");
    scanf("%d", &b);
    x = a;
    y = b;
    while (b != 0) {
        temp = a % b;
        a = b;
        b = temp;
    }
    ucln = a;
    bcnn = (x * y) / ucln;
    printf("Boi chung nho nhat (BCNN) la: %d\n", bcnn);
    return 0;
}

