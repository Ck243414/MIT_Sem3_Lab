#include <stdio.h>

#include <string.h>



// Define a structure for student records

struct Student {

    char name[50];

    int rollNo;

    char grade;

    char branch[50];

};



// Function to input and write student records into a text file

void writeStudentRecords() {

    int n;

    printf("Enter the number of student records: ");

    scanf("%d", &n);



    struct Student students[n];



    // Input student records

    printf("Enter student records:\n");

    for (int i = 0; i < n; i++) {

        printf("Student %d:\n", i + 1);

        printf("Name: ");

        scanf("%s", students[i].name);

        printf("Roll No.: ");

        scanf("%d", &students[i].rollNo);

        printf("Grade: ");

        scanf(" %c", &students[i].grade);

        printf("Branch: ");

        scanf("%s", students[i].branch);

    }



    // Write student records to a text file

    FILE *file = fopen("student_records.txt", "w");

    if (file == NULL) {

        printf("Error opening the file for writing.\n");

        return;

    }



    for (int i = 0; i < n; i++) {

        fprintf(file, "%s %d %c %s\n", students[i].name, students[i].rollNo, students[i].grade, students[i].branch);

    }



    fclose(file);

}



// Function to read student records from a text file and store branch-wise

void readAndStoreBranchWise() {

    FILE *file = fopen("student_records.txt", "r");

    if (file == NULL) {

        printf("Error opening the file for reading.\n");

        return;

    }



    // Create separate files for each branch

    FILE *branchFiles[100]; // Assuming there are at most 100 branches

    int numBranches = 0;



    char name[50], branch[50];

    int rollNo;

    char grade;



    while (fscanf(file, "%s %d %c %s", name, &rollNo, &grade, branch) != EOF) {

        int branchFileIndex = -1;



        // Search for the branch file in the array

        for (int i = 0; i < numBranches; i++) {

            if (strcmp(branch, branchFiles[i]->branch) == 0) {

                branchFileIndex = i;

                break;

            }

        }



        // If branch file not found, create it

        if (branchFileIndex == -1) {

            branchFiles[numBranches] = fopen(branch, "w");

            if (branchFiles[numBranches] == NULL) {

                printf("Error opening branch file for writing.\n");

                return;

            }

            strcpy(branchFiles[numBranches]->branch, branch);

            numBranches++;

        }



        // Write the record to the branch file

        fprintf(branchFiles[branchFileIndex], "%s %d %c %s\n", name, rollNo, grade, branch);

    }



    fclose(file);



    // Close all branch files

    for (int i = 0; i < numBranches; i++) {

        fclose(branchFiles[i]);

    }

}



int main() {

    // Write student records to a text file

    writeStudentRecords();



    // Read and store student records branch-wise

    readAndStoreBranchWise();



    printf("Student records have been stored branch-wise in separate files.\n");



    return 0;

}
