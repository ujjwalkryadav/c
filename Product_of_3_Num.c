#include <stdio.h>

int main() {
    int num1, num2, num3, product;

    printf("Enter First Number:- ");
    scanf("%d", &num1);

    printf("Enter Second Number:-");
    scanf("%d", &num2);

    printf("Enter Third Number:- ");
    scanf("%d",&num3);

    product = num1 * num2 * num3;

    printf("Product = %d", product);

    return 0;
}

