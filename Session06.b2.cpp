#include <stdio.h>

int main() {
    int numbers[5];
    int evenCount = 0, oddCount = 0;
    printf("Moi ban nhap vao 5 so nguyen:\n");
    for (int i = 0; i < 5; i++) {
        printf("Nhap so  %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0) {  
            evenCount++;
        } else {  
            oddCount++;
        }
    }
    printf("So luong cua so chan la : %d\n", evenCount);
    printf("So luong cua so le la : %d\n", oddCount);
}
