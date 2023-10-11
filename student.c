#include <stdio.h>

struct Student {
    char name[50];
    int USN;
    float marks;
};

int main() {
    int n;
    float totalMarks = 0;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("Enter details of Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("USN: ");
        scanf("%d", &students[i].USN);
        printf("Marks: ");
        scanf("%f", &students[i].marks);

        totalMarks += students[i].marks;
    }

    float averageMarks = totalMarks / n;

    printf("\nAverage Marks: %.2f\n", averageMarks);
    printf("Students scoring above average marks:\n");

    for (int i = 0; i < n; i++) {
        if (students[i].marks > averageMarks) {
            printf("\nName: %s,\n USN: %d,\n Marks: %.2f\n", students[i].name, students[i].USN, students[i].marks);
        }
    }

    printf("Students scoring below average marks:\n");

    for (int i = 0; i < n; i++) {
        if (students[i].marks < averageMarks) {
            printf("\nName: %s,\n USN: %d,\n Marks: %.2f\n", students[i].name, students[i].USN, students[i].marks);
        }
    }

    return 0;
}

