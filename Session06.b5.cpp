#include <stdio.h>
int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1; 
    }
    return 0;  
}
int main() {
    int year, month, days;
    printf("So nam: ");
    scanf("%d", &year);
    printf("Moi nhap so thang: ");
    scanf("%d", &month);
    if (month < 1 || month > 12) {
        printf("Moi nhap so thang.\n");
        return 1; 
    }
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        days = 31;  
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30; 
    } else if (month == 2) {
        if (isLeapYear(year)) {
            days = 29;  
        } else {
            days = 28;  
        }
    }

    printf("so ngay cua thang %d trg nam %d is: %d\n", month, year, days);
}

