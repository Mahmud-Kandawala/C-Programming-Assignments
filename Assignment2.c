#include <stdio.h>
#include <stdbool.h>

#define SIZE 1000

int main() {
    bool isPrime[SIZE];
    int i, j;

    
    for (i = 0; i < SIZE; i++) {
        isPrime[i] = true;
    }

    isPrime[0] = false;
    isPrime[1] = false;

    for (i = 2; i * i < SIZE; i++) {
        if (isPrime[i] == true) {
            for (j = i * i; j < SIZE; j += i) {
                isPrime[j] = false;
            }
        }
    }

    for (i = 2; i < SIZE; i++) {
        if (isPrime[i]) {
            printf("%d\n", i);
        }
    }

    return 0;
}