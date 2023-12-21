#include<stdio.h>

int main() {
    char str[100], rstr[100];
    int i, j, len;

    // Read a string
    printf("Enter a string: ");
    scanf("%s", str);

    // Find the length of the string
    for(len = 0; str[len] != '\0'; len++);

    // Reverse the string
    for(i = 0, j = len - 1; i < len; i++, j--) {
        rstr[i] = str[j];
    }
    rstr[len] = '\0'; // Null-terminate the reversed string

    // Display the reversed string
    printf("Reversed string: %s\n", rstr);

    return 0;
}
