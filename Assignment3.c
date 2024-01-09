#include <stdio.h>
#include <stdbool.h>


bool findSubstring(char *str, char *substr, int *index) {
    char *point = str, *sub;
    int i = 0, j;
    
    while (*point != '\0') {
        sub = substr;
        j = i;
        
        while (*point == *sub && *sub != '\0') {
            point++;
            sub++;
        }
        
        if (*sub == '\0') {
            *index = i; 
            return true; 
        }
        
        point = str + ++i;
    }
    
    return false; 
}

int main() {
    char str1[100], str2[100];
    int index;

    printf("Enter string 1: ");
    scanf("%s", str1);
    printf("Enter string 2: ");
    scanf("%s", str2);

    bool match = findSubstring(str1, str2, &index);

    if (match) {
        printf("TRUE, index of %d\n", index);
    } else {
        printf("FALSE\n");
    }

    return 0;
}