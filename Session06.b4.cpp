#include <stdio.h>

int main() {
    int a, b, c, discriminant, root1, root2;
    printf("Nhap cac he so  ax^2 + bx + c = 0:\n");
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);
    if (a == 0) {
        printf("Day khong la phuong trinh bac 2 .\n");
        return 1; 
    }
    discriminant = (b * b) - (4 * a * c);
    if (discriminant > 0) {
        root1 = (-b + discriminant) / (2 * a);  
        root2 = (-b - discriminant) / (2 * a);  
        printf("Hai so co 2 nghiem phan biet.\n");
        printf("Root 1 = %d\n", root1);
        printf("Root 2 = %d\n", root2);
    } else if (discriminant == 0) {
        root1 = -b / (2 * a); 
        printf("Phuong trinh co 1 nghiem \n");
        printf("Root = %d\n", root1);
    } else {
        printf("Phuong trinh vo nghiem\n");
    }

    return 0;
}

