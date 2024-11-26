#include <stdio.h>

int main() {
    double principal, interestRate, profit, totalAmount;
    int months;
    printf("Nhap so tien gui ban dau: ");
    scanf("%lf", &principal);

    printf("Lai suat hang thang la (in %%): ");
    scanf("%lf", &interestRate);

    printf("Nhap so thang gui tien : ");
    scanf("%d", &months);
    totalAmount = principal;
    for(int i = 0; i < months; i++) {
        totalAmount += totalAmount * (interestRate / 100);
    }
    profit = totalAmount - principal;
    printf("Loi nhuan: %.3lf\n", profit);
    printf("So tien thu duoc la : %.3lf\n", totalAmount);
}


