#include<stdio.h>
#include<conio.h> // Include conio.h for getch()

// Function to read password
void read(char str[100]) {
    char ch;
    int i = 0;
    do {
        ch = getch();
        if (ch != 13) {
            printf("*");
            str[i] = ch;
            i++;
        }
    } while (ch != 13);
    str[i] = '\0';
}

// Function to test conformed password
void test(char pass[100], char con_pass[100]) {
    int flag = 1, i;
    for (i = 0; pass[i] != '\0'; i++) {
        if (pass[i] != con_pass[i]) {
            flag = 0;
            break; // Break the loop as soon as a mismatch is found
        }
    }
    if (con_pass[i] != '\0') {
        flag = 0;
    }

    if (flag == 1) {
        printf("\nPasswords match.\n");
    } else {
        printf("\nPasswords do not match.\n");
    }
}

int main() {
    char pass[100], con_pass[100];

    printf("Enter password: ");
    read(pass);

    printf("\nEnter confirm password: ");
    read(con_pass);

    test(pass, con_pass);

    return 0;
}
