#include <stdio.h>

int main() {
    int num_classes;
    double overall_total_marks = 0;
    int overall_total_students = 0;

    printf("Enter the number of classes in the school: ");
    scanf("%d", &num_classes);

    for(int c = 1; c <= num_classes; c++) {
        int num_students;
        double class_total_marks = 0;

        printf("\nEnter the number of students in Class %d: ", c);
        scanf("%d", &num_students);

        for(int s = 1; s <= num_students; s++) {
            int num_subjects;
            double student_total_marks = 0;
            int passed = 1;

            printf("Enter the number of subjects for Class %d, Student %d: ", c, s);
            scanf("%d", &num_subjects);

            for(int sub = 1; sub <= num_subjects; sub++) {
                double marks;
                printf("  Enter marks for Subject %d: ", sub);
                scanf("%lf", &marks);

                student_total_marks += marks;
                if(marks < 40) {
                    passed = 0;
                }
            }

            double student_average = student_total_marks / num_subjects;

            printf("Class %d, Student %d: Total Marks = %.2f, Average = %.2f, Result = %s\n", 
                   c, s, student_total_marks, student_average, passed ? "Pass" : "Fail");

            class_total_marks += student_total_marks;
        }

        double class_average = (num_students > 0) ? (class_total_marks / num_students) : 0;
        printf("\nTotal marks of all students in Class %d: %.2f, Class Average = %.2f\n", 
               c, class_total_marks, class_average);

        overall_total_marks += class_total_marks;
        overall_total_students += num_students;
    }

    double overall_school_average = (overall_total_students > 0) ? (overall_total_marks / overall_total_students) : 0;
    printf("\n==================================================\n");
    printf("Total marks of all students across all classes: %.2f\n", overall_total_marks);
    printf("Overall school average: %.2f\n", overall_school_average);
    printf("==================================================\n");

    return 0;
}