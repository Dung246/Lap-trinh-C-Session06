#include <stdio.h>

int main() {
    int num, i, numPrime = 1;
    printf("Moi nhap 1 so nguyen to : ");
    scanf("%d", &num);
    if (num <= 1) {
        numPrime = 0;
    } else {
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                numPrime = 0;  
                break;  
            }
        }
    }

    if (numPrime) {
        printf("%d la 1 so nguyen to \n", num);
    } else {
        printf("%d khong la so nguyen to \n", num);
    }
}

