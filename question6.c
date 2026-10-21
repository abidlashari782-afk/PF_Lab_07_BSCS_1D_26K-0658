#include <stdio.h>

int main() {
    int data[3][3];
    int key[3][3];
    int encrypted[3][3];
    
    int max_val;
    int max_i = 0, max_j = 0;

    printf("=== ENTER DATA MATRIX (3x3) ===\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Enter data value for position (%d, %d): ", i, j);
            scanf("%d", &data[i][j]);
        }
    }

    printf("\n=== ENTER KEY MATRIX (3x3) ===\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Enter key value for position (%d, %d): ", i, j);
            scanf("%d", &key[i][j]);
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            encrypted[i][j] = (data[i][j] * key[i][j]) + (i + j);
        }
    }

    max_val = encrypted[0][0];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(encrypted[i][j] > max_val) {
                max_val = encrypted[i][j];
                max_i = i;
                max_j = j;
            }
        }
    }

    printf("\n=================== ENCRYPTED MATRIX SUMMARY ===================\n");
    
    printf("\n[Encrypted Matrix (3x3 Grid)]:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d\t", encrypted[i][j]);
        }
        printf("\n");
    }

    printf("\n-----------------------------------------------------------------\n");
    printf("[Maximum Encrypted Value Analysis]:\n");
    printf("Maximum Encrypted Value: %d\n", max_val);
    printf("Position (Row, Column): (%d, %d)\n", max_i, max_j);
    printf("=================================================================\n");

    return 0;
}