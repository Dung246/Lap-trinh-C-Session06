#include <stdio.h>

int main() {
    int numbers;
    int sumOdd = 0;
    printf("Moi ban nhap 5 so nguyen :\n");
    for (int i = 0; i < 5; i++) {
        printf("So da nhap la  %d: ", i + 1);
        scanf("%d", &numbers);
    }
    for (int i = 0; i < 5; i++) {
        if (numbers % 2 != 0) { 
            sumOdd += numbers;
        }
    }
    printf("Tong cua cac so le la : %d\n", sumOdd);
    return 0;
}
