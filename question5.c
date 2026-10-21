#include <stdio.h>

int main() {
    int marks[2][3][3];
    int student_totals[2][3] = {0};
    
    int class_topper[2] = {0};
    int overall_class = 0;
    int overall_student = 0;

    printf("ENTER ACADEMIC RECORDS (2 Classes, 3 Students, 3 Subjects)\n");
    for(int c = 0; c < 2; c++) {
        printf("\n--- Entering data for Class %d ---\n", c + 1);
        for(int s = 0; s < 3; s++) {
            printf("  [Student %d]\n", s + 1);
            for(int sub = 0; sub < 3; sub++) {
                printf("    Enter marks for Subject %d: ", sub + 1);
                scanf("%d", &marks[c][s][sub]);
            }
        }
    }

    for(int c = 0; c < 2; c++) {
        for(int s = 0; s < 3; s++) {
            for(int sub = 0; sub < 3; sub++) {
                student_totals[c][s] += marks[c][s][sub];
            }
        }
    }

    for(int c = 0; c < 2; c++) {
        int max_s_idx = 0;
        for(int s = 1; s < 3; s++) {
            if(student_totals[c][s] > student_totals[c][max_s_idx]) {
                max_s_idx = s;
            }
        }
        class_topper[c] = max_s_idx;
    }

    int max_overall_marks = student_totals[0][0];
    for(int c = 0; c < 2; c++) {
        for(int s = 0; s < 3; s++) {
            if(student_totals[c][s] > max_overall_marks) {
                max_overall_marks = student_totals[c][s];
                overall_class = c;
                overall_student = s;
            }
        }
    }

    printf("\n=================== FINAL PERFORMANCE SUMMARY ===================\n");
    
    printf("\n{Total Marks per Student Summary}:\n");
    for(int c = 0; c < 2; c++) {
        printf("  Class %d:\n", c + 1);
        for(int s = 0; s < 3; s++) {
            printf("    - Student %d Total Marks = %d\n", s + 1, student_totals[c][s]);
        }
    }

    printf("\n-----------------------------------------------------------------\n");
    printf("[Class Toppers]:\n");
    for(int c = 0; c < 2; c++) {
        int topper_student = class_topper[c];
        int topper_marks = student_totals[c][topper_student];
        printf("Top Performer of Class %d: Student %d with %d marks\n", c + 1, topper_student + 1, topper_marks);
    }

    printf("\n-----------------------------------------------------------------\n");
    printf("[Overall Topper]:\n");
    printf("Overall Topper is Student %d from Class %d with a total of %d marks!\n",overall_student + 1, overall_class + 1, max_overall_marks);
    printf("=================================================================\n");

    return 0;
}