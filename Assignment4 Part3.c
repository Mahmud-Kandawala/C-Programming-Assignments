#include <stdio.h>

int Reverse(int num) {
    int ReverseNumber = 0;
    while (num != 0) {
        ReverseNumber = ReverseNumber * 10 + num % 10;
        num /= 10;
    }
    return ReverseNumber;
}

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    int ReverseNumberber = Reverse(number);
    printf("Reversed Number: %d\n", ReverseNumberber);

    return 0;
}
