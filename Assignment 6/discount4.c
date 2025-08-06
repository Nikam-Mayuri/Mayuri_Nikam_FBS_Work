#include <stdio.h>

void calculateDiscount();  // Function declaration

void main() {
    calculateDiscount();
}

void calculateDiscount() {
    float price, discount;
    char student;

    printf("Enter price: ");
    scanf("%f", &price);
    printf("Are you a student? (y/n): ");
    scanf(" %c", &student);

    if (student == 'y' || student == 'Y') {
        if (price > 500)
            discount = price * 0.20;
        else
            discount = price * 0.10;
    } else {
        if (price > 600)
            discount = price * 0.15;
        else
            discount = 0.0;
    }

    printf("Discount = %.2f\n", discount);
}
