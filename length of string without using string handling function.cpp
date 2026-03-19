#include <stdio.h>

int main() {
    char str[100];
    int i = 0, length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read input (including spaces)

    // Count length manually
    while (str[i] != '\0') {
        // Ignore newline character added by fgets
        if (str[i] != '\n') {
            length++;
        }
        i++;
    }

    printf("Length of the string = %d\n", length);

    return 0;
}
