#include <stdio.h>

int main() {
    int num, digit1, digit2, digit3, sum;
    printf("Cac so Armstrong co 3 chu so la:\n");
    for (num = 100; num <= 999; num++) {
        digit1 = num / 100;         
        digit2 = (num / 10) % 10;   
        digit3 = num % 10;          
        sum = (digit1 * digit1 * digit1) + (digit2 * digit2 * digit2) + (digit3 * digit3 * digit3);
        if (sum == num) {
            printf("%d\n", num);
        }
    }
}

