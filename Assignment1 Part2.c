#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int multi[1250]; 
    int count = 0;

    for (int i = 8; i < 10000; i += 8) {
        multi[count] = i;
        count++;
    }

    qsort(multi, count, sizeof(int), compare);

    printf("multi of 8 less than 10,000:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", multi[i]);
    }
    printf("\n");

    return 0;
}