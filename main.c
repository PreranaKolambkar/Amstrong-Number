#include <stdio.h>

int Armstrong(int number) {
    int originalNumber = number;
    int sum = 0;
    int digit;

    while (number != 0) {
        digit = number % 10;
        sum += digit * digit * digit;
        number /= 10;
    }

    return sum == originalNumber;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (Armstrong(num)) {
        printf("%d is an Armstrong number\n", num);
    } else {
        printf("%d is not an Armstrong number\n", num);
    }

    return 0;
}
