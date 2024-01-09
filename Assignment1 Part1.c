#include <stdio.h>

int search(float number, float array[], int size) {
    for (int i = 0; i < size; i++) {
        if (array[i] == number) {
            return i;
        }
    }
    return -1;
}

int main() {
    float blockA[12], blockB[6], blockC[9], number;
    int lenA = 0, lenB = 0, lenC = 0;
    char c;

    printf("Enter values for Array A:\n");
    while (scanf("%f%c", &blockA[lenA], &c) == 2) {
        lenA++;
    }
    while (c != '\n') {
        scanf("%c", &c);
    }

    printf("Enter values for Array B:\n");
    while (scanf("%f%c", &blockB[lenB], &c) == 2) {
        lenB++;
    }
    while (c != '\n') {
        scanf("%c", &c);
    }

    printf("Enter values for Array C:\n");
    while (scanf("%f%c", &blockC[lenC], &c) == 2) {
        lenC++;
    }
    while (c != '\n') {
        scanf("%c", &c);
    }

    printf("Enter a value to search for: ");
    scanf("%f", &number);

    int index_A = search(number, blockA, lenA);
    
    int index_B = search(number, blockB, lenB);
    
    int index_C = search(number, blockC, lenC);

    printf("Value %f found at index in Array A: %d\n", number, index_A);
    
    printf("Value %f found at index in Array B: %d\n", number, index_B);
    
    printf("Value %f found at index in Array C: %d\n", number, index_C);

    return 0;
}