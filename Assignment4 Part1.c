#include <stdio.h>

int isPerfect(int number) {
    int sum = 0;

    for (int i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }

    if (sum == number) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    printf("Perfect numbers between 1 and 1000:\n");

    for (int i = 1; i <= 1000; i++) {
        if (isPerfect(i)) {
            printf("%d is a perfect number. Factors: ", i);

            for (int j = 1; j <= i / 2; j++) {
                if (i % j == 0) {
                    printf("%d ", j);
                }
            }

            printf("\n");
        }
    }


    return 0;
}
