#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str1[100], str2[100], target[100];
    int choice, result;

    while (1) {
        printf("\n=== STRING OPERATIONS MENU ===");
        printf("\n1. Find String Length (strlen)");
        printf("\n2. Copy String (strcpy)");
        printf("\n3. Concatenate Strings (strcat)");
        printf("\n4. Compare Strings (strcmp)");
        printf("\n5. Exit");
        printf("\nEnter your choice (1-5): ");
        scanf("%d", &choice);
        getchar(); // Clear newline character from input buffer

        switch (choice) {
            case 1:
                printf("Enter a string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0'; // Remove trailing newline
                
                printf("Length of the string: %lu\n", (unsigned long)strlen(str1));
                break;

            case 2:
                printf("Enter source string to copy: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
                
                strcpy(target, str1);
                printf("Successfully copied! Target string contents: %s\n", target);
                break;

            case 3:
                printf("Enter first string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
                
                printf("Enter second string to append: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';
                
                strcat(str1, str2);
                printf("Concatenated string: %s\n", str1);
                break;

            case 4:
                printf("Enter first string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
                
                printf("Enter second string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';
                
                result = strcmp(str1, str2);
                if (result == 0) {
                    printf("Strings are perfectly identical.\n");
                } else if (result > 0) {
                    printf("First string is lexicographically greater than the second.\n");
                } else {
                    printf("First string is lexicographically smaller than the second.\n");
                }
                break;

            case 5:
                printf("Exiting program. Goodbye!\n");
                exit(0);

            default:
                printf("Invalid choice! Please select an option between 1 and 5.\n");
        }
    }
    return 0;
}
