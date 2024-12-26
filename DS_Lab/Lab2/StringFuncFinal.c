
#include <stdio.h>



// Function to calculate the length of a string

int stringLength(const char str[]) {

    int length = 0;

    while (str[length] != '\0') {

        length++;

    }

    return length;

}



// Function to concatenate two strings

void stringConcatenate(char destination[], const char source[]) {

    int destLength = stringLength(destination);

    int i = 0;

    while (source[i] != '\0') {

        destination[destLength + i] = source[i];

        i++;

    }

    destination[destLength + i] = '\0';

}



// Function to compare two strings

int stringCompare(const char str1[], const char str2[]) {

    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') {

        if (str1[i] != str2[i]) {

            return str1[i] - str2[i];

        }

        i++;

    }

    return str1[i] - str2[i];

}



// Function to insert a substring into a string

void stringInsert(char str[], const char substr[], int position) {

    int strLength = stringLength(str);

    int subLength = stringLength(substr);



    if (position < 0 || position > strLength) {

        printf("Invalid position for insertion.\n");

        return;

    }



    for (int i = strLength; i >= position; i--) {

        str[i + subLength] = str[i];

    }



    for (int i = 0; i < subLength; i++) {

        str[position + i] = substr[i];

    }

}



// Function to delete a substring from a string

void stringDelete(char str[], int position, int length) {

    int strLength = stringLength(str);



    if (position < 0 || position >= strLength || length < 0) {

        printf("Invalid position or length for deletion.\n");

        return;

    }



    for (int i = position; i < strLength - length; i++) {

        str[i] = str[i + length];

    }

    str[strLength - length] = '\0';

}



int main() {

    char str1[100], str2[100], result[200];

    int position, length;



    // Input strings

    printf("Enter the first string: ");

    scanf("%s", str1);

    printf("Enter the second string: ");

    scanf("%s", str2);



    // Calculate string length

    printf("Length of the first string: %d\n", stringLength(str1));



    // Concatenate strings

    stringConcatenate(result, str1);

    stringConcatenate(result, str2);

    printf("Concatenated string: %s\n", result);



    // Compare strings

    int cmpResult = stringCompare(str1, str2);

    if (cmpResult < 0) {

        printf("First string is lexicographically smaller than the second.\n");

    } else if (cmpResult > 0) {

        printf("First string is lexicographically larger than the second.\n");

    } else {

        printf("Both strings are equal.\n");

    }



    // Insert a substring

    printf("Enter the position to insert a substring: ");

    scanf("%d", &position);

    printf("Enter the substring to insert: ");

    scanf("%s", str2);

    stringInsert(str1, str2, position);

    printf("Result after insertion: %s\n", str1);



    // Delete a substring

    printf("Enter the position to delete a substring: ");

    scanf("%d", &position);

    printf("Enter the length of substring to delete: ");

    scanf("%d", &length);

    stringDelete(str1, position, length);

    printf("Result after deletion: %s\n", str1);



    return 0;

}
