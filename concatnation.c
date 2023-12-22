#include <stdio.h>

void read(char str[100]) {
    printf("Enter a string: ");
    scanf("%s", str);
}

void merge(char str1[100], char str2[100]) {
    int i, len;

    // Find the length of str1
    for (len = 0; str1[len] != '\0'; len++);

    // Concatenate str2 to str1
    for (i = 0; str2[i] != '\0'; i++) {
        str1[len + i] = str2[i];
    }

    str1[len + i] = '\0'; // Null-terminate the result
}

int main() {
    char str1[100], str2[100];

    read(str1);
    read(str2);

    printf("str1 before merge: %s\n", str1);
    printf("str2 before merge: %s\n", str2);

    merge(str1, str2);

    printf("str1 after merge: %s\n", str1);
    printf("str2 after merge: %s\n", str2);

    return 0;
}
