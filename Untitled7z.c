#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Nhap so nguyen duong thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so nguyen duong thu hai: ");
    scanf("%d", &b);

    while (b != 0) {
        temp = a % b;
        a = b;
        b = temp;
    }

    printf("Uoc chung lon nhat (UCLN) la: %d\n", a);

    return 0;
}

