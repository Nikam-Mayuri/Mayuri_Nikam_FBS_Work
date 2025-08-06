#include <stdio.h>

float calculateDiscount(float price, char student);  // Function declaration

void main() {
    float price;
    char student;

    printf("Enter price: ");
    scanf("%f", &price);
    printf("Are you a student? (y/n): ");
    scanf(" %c", &student);  // Note the space before %c

    float discount = calculateDiscount(price, student);
    printf("Discount = %.2f\n", discount);
}

float calculateDiscount(float price, char student) {
    if (student == 'y' || student == 'Y') {
        if (price > 500)
            return price * 0.20;
        else
            return price * 0.10;
    } else {
        if (price > 600)
            return price * 0.15;
        else
            return 0.0;
    }
}
