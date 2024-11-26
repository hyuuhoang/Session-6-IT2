#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double delta, x1, x2;

    // Nh?p các h? s?
    printf("Nhap he so a: ");
    scanf("%lf", &a);
    printf("Nhap he so b: ");
    scanf("%lf", &b);
    printf("Nhap he so c: ");
    scanf("%lf", &c);

    if (a == 0) {
        printf("Khong phai phuong trinh bac 2!\n");
    } else {
        // Tính delta
        delta = b * b - 4 * a * c;

        if (delta > 0) {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Hai nghiem phan biet: x1 = %.2lf, x2 = %.2lf\n", x1, x2);
        } else if (delta == 0) {
            // Nghi?m kép
            x1 = -b / (2 * a);
            printf("Nghiem kep: x1 = x2 = %.2lf\n", x1);
        } else {

            printf("Phuong trinh vo nghiem!\n");
        }
    }

    return 0;
}

