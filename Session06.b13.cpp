#include <stdio.h>

int main() {
    int day, month;
    printf("Nhap thang sinh : ");
    scanf("%d", &month);
    printf("Nhap nam sinh: ");
    scanf("%d", &day);

    // Determine the zodiac sign based on the month and day
    if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) {
        printf("Cung hoang dao cua ban la : Bach Duong \n");
    } else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) {
        printf("Cung hoang dao cua ban la: Kim Nguu\n");
    } else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) {
        printf("Cung hoang dao cua ban la: Song Tu \n");
    } else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) {
        printf("Cung hoang dao cua ban la: Cu Giai\n");
    } else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) {
        printf("Cung hoang dao cua ban la: Su Tu \n");
    } else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) {
        printf("Cung hoang dao cua ban la: Xu Nu\n");
    } else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) {
        printf("Cung hoang dao cua ban la: Thien Binh\n");
    } else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) {
        printf("Cung hoang dao cua ban la: Bo Cap\n");
    } else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) {
        printf("Cung hoang dao cua ban la: Nhan Ma\n");
    } else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) {
        printf("Cung hoang dao cua ban la: Ma Ket\n");
    } else if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) {
        printf("Cung hoang dao cua ban la: Bao Binh\n");
    } else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) {
        printf("Cung hoang dao cua ban la: Song Ngu\n");
    } else {
        printf("Invalid date or month entered.\n");
    }

    return 0;
}

