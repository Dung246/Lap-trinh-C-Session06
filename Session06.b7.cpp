#include <stdio.h>

int main() {
    int num;
    printf("Moi ban nhap vao 1 so nguyen: ");
    scanf("%d", &num);
    if (num < 0) {
        num = -num;  
    }
    printf("UCLN cua %d la : ", num);
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) { 
            printf("%d ", i);
        }
    }
    printf("\n");
}

