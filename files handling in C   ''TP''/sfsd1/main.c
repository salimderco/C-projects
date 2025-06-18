#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50 // Define the maximum length for the name

typedef struct {
    int id;
    char name[MAX_NAME_LENGTH];
    float grade;
} student;

void addstudent(FILE* file) {
    student s; // Create a student variable to store the input
    printf("Enter the student ID: ");
    scanf("%d", &s.id);
    printf("Enter the student name: ");
    scanf("%s", s.name);
    printf("Enter the student grade: ");
    scanf("%f", &s.grade);
    fwrite(&s, sizeof(student), 1, file);
    printf("Student record added successfully.\n");
}

void displayStudent(FILE* file) {
    student s; // Create a student variable to read the records
    rewind(file); // Move the file pointer to the beginning
    printf("\nStudent records:\n");
    printf("ID\tName\t\tGrade\n");
    while (fread(&s, sizeof(student), 1, file)) {
        printf("%d\t%s\t\t%.2f\n", s.id, s.name, s.grade);
    }
}

void modifyStudent(FILE* file) {
    int id, found = 0;
    student s;

    printf("Enter the student ID to modify: ");
    scanf("%d", &id);

    rewind(file); // Move the file pointer to the beginning

    // Read through the file to find the matching student ID
    while (fread(&s, sizeof(student), 1, file)) {
        if (s.id == id) {
            found = 1;
            printf("Student found. Enter new details:\n");
            printf("Enter new name: ");
            scanf("%s", s.name);
            printf("Enter new grade: ");
            scanf("%f", &s.grade);

            // Move the file pointer back to the start of this record
            fseek(file, -sizeof(student), SEEK_CUR);
            fwrite(&s, sizeof(student), 1, file); // Write the updated record
            printf("Student record updated successfully.\n");
            break;
        }
    }

    if (!found) {
        printf("Student with ID %d not found.\n", id);
    }
}

int main() {
    FILE* file;
    int choice;

    file = fopen("student.dat", "rb+"); // Open the file in read/write mode
    if (!file) { // Error handling if file could not be opened
        fprintf(stderr, "Could not open the file.\n");
        return 1;
    }

    do {
        printf("\nMenu:\n");
        printf("1. Add student record\n");
        printf("2. Display all student records\n");
        printf("3. Modify student record\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addstudent(file);
                break;
            case 2:
                displayStudent(file);
                break;
            case 3:
                modifyStudent(file);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice, please try again.\n");
        }
    } while (choice != 4); // Exit when the choice is 4

    fclose(file); // Close the file when done
    return 0;
}
