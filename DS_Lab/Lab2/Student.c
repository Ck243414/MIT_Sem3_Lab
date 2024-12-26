#include <stdio.h>

#include <string.h>



// Define the structure student

struct Student {

    char name[50];

    int rollNo;

    char grade;

};



// Function to read student information

void readStudentInfo(struct Student students[], int n) {

    printf("Enter student details:\n");

    for (int i = 0; i < n; i++) {

        printf("Student %d:\n", i + 1);

        printf("Name: ");

        scanf("%s", students[i].name);

        printf("Roll Number: ");

        scanf("%d", &students[i].rollNo);

        printf("Grade: ");

        scanf(" %c", &students[i].grade);

    }

}



// Function to display student information

void displayStudentInfo(struct Student students[], int n) {

    printf("Student Information:\n");

    for (int i = 0; i < n; i++) {

        printf("Student %d:\n", i + 1);

        printf("Name: %s\n", students[i].name);

        printf("Roll Number: %d\n", students[i].rollNo);

        printf("Grade: %c\n", students[i].grade);

    }

}



// Function to sort student information by roll number

void sortStudentInfo(struct Student students[], int n) {

    struct Student temp;

    for (int i = 0; i < n - 1; i++) {

        for (int j = 0; j < n - i - 1; j++) {

            if (students[j].rollNo > students[j + 1].rollNo) {

                // Swap students[j] and students[j + 1]

                temp = students[j];

                students[j] = students[j + 1];

                students[j + 1] = temp;

            }

        }

    }

}



int main() {

    int n;



    printf("Enter the number of students: ");

    scanf("%d", &n);



    struct Student students[n];



    // Read student information

    readStudentInfo(students, n);



    // Display student information

    displayStudentInfo(students, n);



    // Sort student information by roll number

    sortStudentInfo(students, n);



    // Display sorted student information

    printf("\nStudent Information (Sorted by Roll Number):\n");

    displayStudentInfo(students, n);



    return 0;

}
