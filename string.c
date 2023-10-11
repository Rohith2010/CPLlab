#include <stdio.h>
#include <string.h>

int compareStrings(const char *str1, const char *str2) {
    return strcmp(str1, str2);
}

void concatenateStrings(const char *str1, const char *str2, char *result) {
    strcpy(result, str1);
    strcat(result, str2);
}

int stringLength(const char *str) {
    return strlen(str);
}

int main() {
    char str1[100], str2[100];
    char concatenated[200];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    int compareResult = compareStrings(str1, str2);
    if (compareResult == 0) {
        printf("The two strings are equal.\n");
    } else if (compareResult < 0) {
        printf("The first string is less than the second string.\n");
    } else {
        printf("The first string is greater than the second string.\n");
    }

    concatenateStrings(str1, str2, concatenated);
    printf("Concatenated string: %s\n", concatenated);

    int length = stringLength(str1);
    printf("Length of the first string: %d\n", length);
    printf("Length of the second string: %d\n", length);

    return 0;
}
