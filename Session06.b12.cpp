#include <stdio.h>

int main() {
    int n, num1 = 0, num2 = 1, next;
    printf("Nhap so Fibonanci: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Nhap so nguyen duong.\n");
    } else if (n == 1) {
        printf("so Fibonanci: %d\n", num1);
    } else {
        printf("so Fibonanci: %d %d ", num1, num2);
        for (int i = 3; i <= n; i++) {
            next = num1 + num2;
            printf("%d ", next);
            num1 = num2;
            num2 = next;
        }
    }
}

